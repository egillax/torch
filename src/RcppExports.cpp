// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torchr_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// cpp_device_type_to_string
std::string cpp_device_type_to_string(Rcpp::XPtr<XPtrTorch> device);
RcppExport SEXP _torchr_cpp_device_type_to_string(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_device_type_to_string(device));
    return rcpp_result_gen;
END_RCPP
}
// cpp_device_index_to_int
std::int64_t cpp_device_index_to_int(Rcpp::XPtr<XPtrTorch> device);
RcppExport SEXP _torchr_cpp_device_index_to_int(SEXP deviceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type device(deviceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_device_index_to_int(device));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_device
Rcpp::XPtr<XPtrTorch> cpp_torch_device(std::string type, Rcpp::Nullable<std::int64_t> index);
RcppExport SEXP _torchr_cpp_torch_device(SEXP typeSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::int64_t> >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_device(type, index));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dtype_to_string
std::string cpp_dtype_to_string(Rcpp::XPtr<XPtrTorch> dtype);
RcppExport SEXP _torchr_cpp_dtype_to_string(SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dtype_to_string(dtype));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_float32
Rcpp::XPtr<XPtrTorch> cpp_torch_float32();
RcppExport SEXP _torchr_cpp_torch_float32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_float32());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_float64
Rcpp::XPtr<XPtrTorch> cpp_torch_float64();
RcppExport SEXP _torchr_cpp_torch_float64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_float64());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_float16
Rcpp::XPtr<XPtrTorch> cpp_torch_float16();
RcppExport SEXP _torchr_cpp_torch_float16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_float16());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_uint8
Rcpp::XPtr<XPtrTorch> cpp_torch_uint8();
RcppExport SEXP _torchr_cpp_torch_uint8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_uint8());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int8
Rcpp::XPtr<XPtrTorch> cpp_torch_int8();
RcppExport SEXP _torchr_cpp_torch_int8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int8());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int16
Rcpp::XPtr<XPtrTorch> cpp_torch_int16();
RcppExport SEXP _torchr_cpp_torch_int16() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int16());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int32
Rcpp::XPtr<XPtrTorch> cpp_torch_int32();
RcppExport SEXP _torchr_cpp_torch_int32() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int32());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_int64
Rcpp::XPtr<XPtrTorch> cpp_torch_int64();
RcppExport SEXP _torchr_cpp_torch_int64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_int64());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_bool
Rcpp::XPtr<XPtrTorch> cpp_torch_bool();
RcppExport SEXP _torchr_cpp_torch_bool() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_bool());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_generator
Rcpp::XPtr<XPtrTorch> cpp_torch_generator();
RcppExport SEXP _torchr_cpp_torch_generator() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_generator());
    return rcpp_result_gen;
END_RCPP
}
// cpp_generator_current_seed
Rcpp::NumericVector cpp_generator_current_seed(Rcpp::XPtr<XPtrTorch> generator);
RcppExport SEXP _torchr_cpp_generator_current_seed(SEXP generatorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type generator(generatorSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_generator_current_seed(generator));
    return rcpp_result_gen;
END_RCPP
}
// cpp_generator_set_current_seed
void cpp_generator_set_current_seed(Rcpp::XPtr<XPtrTorch> generator, std::uint64_t seed);
RcppExport SEXP _torchr_cpp_generator_set_current_seed(SEXP generatorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type generator(generatorSEXP);
    Rcpp::traits::input_parameter< std::uint64_t >::type seed(seedSEXP);
    cpp_generator_set_current_seed(generator, seed);
    return R_NilValue;
END_RCPP
}
// cpp_lantern_init
void cpp_lantern_init(std::string path);
RcppExport SEXP _torchr_cpp_lantern_init(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    cpp_lantern_init(path);
    return R_NilValue;
END_RCPP
}
// cpp_lantern_test
void cpp_lantern_test();
RcppExport SEXP _torchr_cpp_lantern_test() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cpp_lantern_test();
    return R_NilValue;
END_RCPP
}
// cpp_memory_format_to_string
std::string cpp_memory_format_to_string(Rcpp::XPtr<XPtrTorch> x);
RcppExport SEXP _torchr_cpp_memory_format_to_string(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_memory_format_to_string(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_contiguous_format
Rcpp::XPtr<XPtrTorch> cpp_torch_contiguous_format();
RcppExport SEXP _torchr_cpp_torch_contiguous_format() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_contiguous_format());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_preserve_format
Rcpp::XPtr<XPtrTorch> cpp_torch_preserve_format();
RcppExport SEXP _torchr_cpp_torch_preserve_format() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_preserve_format());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_channels_last_format
Rcpp::XPtr<XPtrTorch> cpp_torch_channels_last_format();
RcppExport SEXP _torchr_cpp_torch_channels_last_format() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_channels_last_format());
    return rcpp_result_gen;
END_RCPP
}
// cpp_qscheme_to_string
std::string cpp_qscheme_to_string(Rcpp::XPtr<XPtrTorch> x);
RcppExport SEXP _torchr_cpp_qscheme_to_string(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_qscheme_to_string(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_per_channel_affine
Rcpp::XPtr<XPtrTorch> cpp_torch_per_channel_affine();
RcppExport SEXP _torchr_cpp_torch_per_channel_affine() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_per_channel_affine());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_per_tensor_affine
Rcpp::XPtr<XPtrTorch> cpp_torch_per_tensor_affine();
RcppExport SEXP _torchr_cpp_torch_per_tensor_affine() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_per_tensor_affine());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_per_channel_symmetric
Rcpp::XPtr<XPtrTorch> cpp_torch_per_channel_symmetric();
RcppExport SEXP _torchr_cpp_torch_per_channel_symmetric() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_per_channel_symmetric());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_per_tensor_symmetric
Rcpp::XPtr<XPtrTorch> cpp_torch_per_tensor_symmetric();
RcppExport SEXP _torchr_cpp_torch_per_tensor_symmetric() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_torch_per_tensor_symmetric());
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_tensor_print
void cpp_torch_tensor_print(Rcpp::XPtr<XPtrTorch> x);
RcppExport SEXP _torchr_cpp_torch_tensor_print(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type x(xSEXP);
    cpp_torch_tensor_print(x);
    return R_NilValue;
END_RCPP
}
// cpp_torch_tensor
Rcpp::XPtr<XPtrTorch> cpp_torch_tensor(SEXP x, std::vector<std::int64_t> dim, Rcpp::XPtr<XPtrTorch> options, bool requires_grad);
RcppExport SEXP _torchr_cpp_torch_tensor(SEXP xSEXP, SEXP dimSEXP, SEXP optionsSEXP, SEXP requires_gradSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::int64_t> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type requires_grad(requires_gradSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_tensor(x, dim, options, requires_grad));
    return rcpp_result_gen;
END_RCPP
}
// cpp_as_array
Rcpp::List cpp_as_array(Rcpp::XPtr<XPtrTorch> x);
RcppExport SEXP _torchr_cpp_as_array(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_as_array(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_tensor_list
Rcpp::XPtr<XPtrTorch> cpp_torch_tensor_list(const Rcpp::List& x);
RcppExport SEXP _torchr_cpp_torch_tensor_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_tensor_list(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tensor_list_to_r_list
Rcpp::List cpp_tensor_list_to_r_list(Rcpp::XPtr<XPtrTorch> x);
RcppExport SEXP _torchr_cpp_tensor_list_to_r_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<XPtrTorch> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tensor_list_to_r_list(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_torch_tensor_options
Rcpp::XPtr<XPtrTorch> cpp_torch_tensor_options(Rcpp::Nullable<Rcpp::XPtr<XPtrTorch>> dtype_ptr, Rcpp::Nullable<Rcpp::XPtr<XPtrTorch>> layout_ptr, Rcpp::Nullable<Rcpp::XPtr<XPtrTorch>> device_ptr, Rcpp::Nullable<bool> requires_grad, Rcpp::Nullable<bool> pinned_memory);
RcppExport SEXP _torchr_cpp_torch_tensor_options(SEXP dtype_ptrSEXP, SEXP layout_ptrSEXP, SEXP device_ptrSEXP, SEXP requires_gradSEXP, SEXP pinned_memorySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<XPtrTorch>> >::type dtype_ptr(dtype_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<XPtrTorch>> >::type layout_ptr(layout_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<XPtrTorch>> >::type device_ptr(device_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type requires_grad(requires_gradSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type pinned_memory(pinned_memorySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_torch_tensor_options(dtype_ptr, layout_ptr, device_ptr, requires_grad, pinned_memory));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nullptr
Rcpp::XPtr<std::nullptr_t> cpp_nullptr();
RcppExport SEXP _torchr_cpp_nullptr() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_nullptr());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torchr_cpp_device_type_to_string", (DL_FUNC) &_torchr_cpp_device_type_to_string, 1},
    {"_torchr_cpp_device_index_to_int", (DL_FUNC) &_torchr_cpp_device_index_to_int, 1},
    {"_torchr_cpp_torch_device", (DL_FUNC) &_torchr_cpp_torch_device, 2},
    {"_torchr_cpp_dtype_to_string", (DL_FUNC) &_torchr_cpp_dtype_to_string, 1},
    {"_torchr_cpp_torch_float32", (DL_FUNC) &_torchr_cpp_torch_float32, 0},
    {"_torchr_cpp_torch_float64", (DL_FUNC) &_torchr_cpp_torch_float64, 0},
    {"_torchr_cpp_torch_float16", (DL_FUNC) &_torchr_cpp_torch_float16, 0},
    {"_torchr_cpp_torch_uint8", (DL_FUNC) &_torchr_cpp_torch_uint8, 0},
    {"_torchr_cpp_torch_int8", (DL_FUNC) &_torchr_cpp_torch_int8, 0},
    {"_torchr_cpp_torch_int16", (DL_FUNC) &_torchr_cpp_torch_int16, 0},
    {"_torchr_cpp_torch_int32", (DL_FUNC) &_torchr_cpp_torch_int32, 0},
    {"_torchr_cpp_torch_int64", (DL_FUNC) &_torchr_cpp_torch_int64, 0},
    {"_torchr_cpp_torch_bool", (DL_FUNC) &_torchr_cpp_torch_bool, 0},
    {"_torchr_cpp_torch_generator", (DL_FUNC) &_torchr_cpp_torch_generator, 0},
    {"_torchr_cpp_generator_current_seed", (DL_FUNC) &_torchr_cpp_generator_current_seed, 1},
    {"_torchr_cpp_generator_set_current_seed", (DL_FUNC) &_torchr_cpp_generator_set_current_seed, 2},
    {"_torchr_cpp_lantern_init", (DL_FUNC) &_torchr_cpp_lantern_init, 1},
    {"_torchr_cpp_lantern_test", (DL_FUNC) &_torchr_cpp_lantern_test, 0},
    {"_torchr_cpp_memory_format_to_string", (DL_FUNC) &_torchr_cpp_memory_format_to_string, 1},
    {"_torchr_cpp_torch_contiguous_format", (DL_FUNC) &_torchr_cpp_torch_contiguous_format, 0},
    {"_torchr_cpp_torch_preserve_format", (DL_FUNC) &_torchr_cpp_torch_preserve_format, 0},
    {"_torchr_cpp_torch_channels_last_format", (DL_FUNC) &_torchr_cpp_torch_channels_last_format, 0},
    {"_torchr_cpp_qscheme_to_string", (DL_FUNC) &_torchr_cpp_qscheme_to_string, 1},
    {"_torchr_cpp_torch_per_channel_affine", (DL_FUNC) &_torchr_cpp_torch_per_channel_affine, 0},
    {"_torchr_cpp_torch_per_tensor_affine", (DL_FUNC) &_torchr_cpp_torch_per_tensor_affine, 0},
    {"_torchr_cpp_torch_per_channel_symmetric", (DL_FUNC) &_torchr_cpp_torch_per_channel_symmetric, 0},
    {"_torchr_cpp_torch_per_tensor_symmetric", (DL_FUNC) &_torchr_cpp_torch_per_tensor_symmetric, 0},
    {"_torchr_cpp_torch_tensor_print", (DL_FUNC) &_torchr_cpp_torch_tensor_print, 1},
    {"_torchr_cpp_torch_tensor", (DL_FUNC) &_torchr_cpp_torch_tensor, 4},
    {"_torchr_cpp_as_array", (DL_FUNC) &_torchr_cpp_as_array, 1},
    {"_torchr_cpp_torch_tensor_list", (DL_FUNC) &_torchr_cpp_torch_tensor_list, 1},
    {"_torchr_cpp_tensor_list_to_r_list", (DL_FUNC) &_torchr_cpp_tensor_list_to_r_list, 1},
    {"_torchr_cpp_torch_tensor_options", (DL_FUNC) &_torchr_cpp_torch_tensor_options, 5},
    {"_torchr_cpp_nullptr", (DL_FUNC) &_torchr_cpp_nullptr, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_torchr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
