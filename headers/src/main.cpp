#include <algorithm>
#include <fstream>
#include <iostream>
#include <istream>
#include <vector>

#include "yaml-cpp/yaml.h"

std::string toLower(std::string str)
{
    std::transform(str.begin(),
                   str.end(),
                   str.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    return str;
}

std::string toCharOnly(std::string str)
{
    auto iterEnd = std::remove_if(str.begin(),
                                  str.end(),
                                  [](unsigned char c){ return !std::isalpha(c); });

    return std::string(str.begin(), iterEnd);
}

std::string toFunction(std::string str, YAML::Node node)
{
    std::string name = "lantern_" + toLower(str);

    for (size_t idx = 0; idx < node.size(); idx++)
    {
        name += "_" + toLower(toCharOnly(node[idx]["dynamic_type"].as<std::string>()))
        ;
    }

    return name;
}

std::string buildArguments(std::string name, YAML::Node node)
{
    std::string arguments = "";

    for (size_t idx = 0; idx < node.size(); idx++)
    {
        if (idx > 0)
        {
            arguments += ", ";
        }

        arguments += "void* " + node[idx]["name"].as<std::string>();
    }

    return arguments;
}

std::string addNamespace(std::string name)
{
    std::vector<std::string> objects;
    objects.push_back("Tensor");
    objects.push_back("Scalar");
    objects.push_back("Generator");
    objects.push_back("Dimname");
    objects.push_back("IntArrayRef");
    objects.push_back("MemoryFormat");

    for (auto iter = objects.begin(); iter != objects.end(); iter++)
    {
        std::size_t found = name.find(*iter);
        if (found != std::string::npos && (found == 0 || name.at(found - 1) == ' ' || name.at(found - 1) == '<'))
            name = name.insert(found, "torch::");
    }

    return name;
}

std::string buildCalls(std::string name, YAML::Node node)
{
    std::string arguments = "";

    for (size_t idx = 0; idx < node.size(); idx++)
    {
        if (idx > 0)
        {
            arguments += ", ";
        }

        arguments += "((LanternObject<" + addNamespace(node[idx]["type"].as<std::string>()) + ">*)" +
            node[idx]["name"].as<std::string>() + ")->get()";
    }

    return arguments;
}

void replaceFile(std::string path,
                 std::string start,
                 std::string end,
                 std::vector<std::string> replacement)
{
    // read input file
    std::string line;
    std::ifstream input(path);
    std::vector<std::string> content;
    while (std::getline(input, line))
    {
        content.push_back(line);
    }
    input.close();

    // make replacements
    auto iterStart = std::find(content.begin(), content.end(), start);
    if (iterStart != content.end())
    {
        auto iterEnd = std::find(iterStart, content.end(), end);
        if (iterStart != content.end())
        {
            std::cout << "Replacing " << path << std::endl;

            content.erase(iterStart + 1, iterEnd);
            content.insert(iterStart + 1, replacement.begin(), replacement.end());
        }
    }

    // write output file
    std::ofstream output(path);
    for (auto iter = content.begin(); iter != content.end(); iter++)
    {
        output << *iter << std::endl;
    }
    output.close();
}

bool isSupported(YAML::Node node)
{
    if (node["method_of"])
    {
        bool hasTensor = false;
        for (size_t i = 0; i < node["method_of"].size(); i++)
            if (node["method_of"][i].as<std::string>() == "Tensor") hasTensor = true;

        if (hasTensor) {
            std::cout << "Skipping (tensor) " << node["name"].as<std::string>() << std::endl;
            return false;
        }
    }

    if (node["abstract"].as<std::string>() == "true")
    {
        std::cout << "Skipping (abstract) " << node["name"].as<std::string>() << std::endl;
        return false;
    }

    return true;
}

std::string buildReturn(YAML::Node node)
{
    std::string type = "";
    for (size_t idx = 0; idx < node.size(); idx++)
    {
        if (idx > 0) type += ", ";

        type += addNamespace(node[idx]["dynamic_type"].as<std::string>());
    }

    if (node.size() > 1)
    {
        type = "std::tuple<" + type + ">";
    }
    
    return type;
}

int main(int argc, char *argv[])
{
    if (argc < 4) {
        std::cout << "Usage: lanterngen declarations.yaml lantern.cpp lantern.h" << std::endl;
        return 1;
    }

    char* pathDeclarations = argv[1];
    char* pathSource = argv[2];
    char* pathHeader = argv[3];

    YAML::Node config = YAML::LoadFile(pathDeclarations);

    std::cout << "Loaded " << pathDeclarations << " with " << config.size() << " nodes" << std::endl;

    // generate function headers and bodies
    std::vector<std::string> headers;
    std::vector<std::string> bodies;
    for (size_t idx = 0; idx < config.size(); idx++)
    {
        if (!isSupported(config[idx])) continue;

        std::string name = config[idx]["name"].as<std::string>();
        std::string arguments = buildArguments(name, config[idx]["arguments"]);
        std::string function = toFunction(name, config[idx]["arguments"]);
        std::string calls = buildCalls(name, config[idx]["arguments"]);
        std::string returns = buildReturn(config[idx]["returns"]);

        headers.push_back("LANTERN_API void* (LANTERN_PTR " + function + ")(" + arguments + ");");
    
        bodies.push_back("void* " + function + "(" + arguments + ")");
        bodies.push_back("{");
        if (returns == "void")
        {
            bodies.push_back("    torch::" + name + "(" + calls + ");");
            bodies.push_back("    return NULL;");
        }
        else
        {
            bodies.push_back("    return (void *) new LanternObject<" + returns + ">(torch::" + name + "(");
            bodies.push_back("        " + calls + "));");
        }
        bodies.push_back("}");
        bodies.push_back("");
    }

    // generate symbol loaders
    std::vector<std::string> symbols;
    for (size_t idx = 0; idx < config.size(); idx ++)
    {
        if (!isSupported(config[idx])) continue;

        std::string name = config[idx]["name"].as<std::string>();
        symbols.push_back("  LOAD_SYMBOL(" + toFunction(name, config[idx]["arguments"]) + ")");
    }

    replaceFile(pathSource, "/* Autogen Body -- Start */", "/* Autogen Body -- End */", bodies);
    replaceFile(pathHeader, "/* Autogen Headers -- Start */", "/* Autogen Headers -- End */", headers);
    replaceFile(pathHeader, "  /* Autogen Symbols -- Start */", "  /* Autogen Symbols -- End */", symbols);

    return 0;
}