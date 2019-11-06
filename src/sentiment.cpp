#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include "cml.h"
#include "eigen.h"

namespace py=pybind11;

// el primer argumento es el nombre...
PYBIND11_MODULE(sentiment, m) {
    py::class_<CML>(m, "CML")
        .def(py::init())
        .def("fit", &CML::fit)
        .def("predict", &CML::predict);
}
