#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include "cml.h"
#include <pybind11/functional.h>
namespace py=pybind11;
#include <vector>

// el primer argumento es el nombre...
PYBIND11_MODULE(predict, m) {
    py::class_<CML>(m, "CML")
        .def(py::init<const std::function<Vector(double)>,int>())
        .def("fit", &CML::fit)
        .def("getA", &CML::getA)
        .def("getB", &CML::getB)
        .def("appF", &CML::appF)
        .def("predict",&CML::predict);
}

