#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include "cml.h"

namespace py=pybind11;

// el primer argumento es el nombre...
PYBIND11_MODULE(predict, m) {
    py::class_<CML>(m, "CML")
        .def(py::init<int,uint>())
        .def("fit", &CML::fit)
        .def("predict",&CML::predict);
}
