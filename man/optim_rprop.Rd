% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/optim-rprop.R
\name{optim_rprop}
\alias{optim_rprop}
\title{Implements the resilient backpropagation algorithm.}
\usage{
optim_rprop(params, lr = 0.01, etas = c(0.5, 1.2), step_sizes = c(1e-06, 50))
}
\arguments{
\item{params}{(iterable): iterable of parameters to optimize or lists defining
parameter groups}

\item{lr}{(float, optional): learning rate (default: 1e-2)}

\item{etas}{(Tuple(float, float), optional): pair of (etaminus, etaplis), that
are multiplicative increase and decrease factors
(default: (0.5, 1.2))}

\item{step_sizes}{(vector(float, float), optional): a pair of minimal and
maximal allowed step sizes (default: (1e-6, 50))}
}
\description{
Proposed first in \href{https://citeseerx.ist.psu.edu:443/viewdoc/summary?doi=10.1.1.52.4576}{RPROP - A Fast Adaptive Learning Algorithm}
}
\section{Warning}{
If you need to move a model to GPU via \verb{$cuda()}, please do so before
constructing optimizers for it. Parameters of a model after \verb{$cuda()}
will be different objects from those before the call. In general, you
should make sure that the objects pointed to by model parameters subject
to optimization remain the same over the whole lifecycle of optimizer
creation and usage.
}

\examples{
if (torch_is_installed()) {
\dontrun{
optimizer <- optim_rprop(model$parameters(), lr = 0.1)
optimizer$zero_grad()
loss_fn(model(input), target)$backward()
optimizer$step()
}
}
}
