#include "pybind11/pybind11.h"
//#include "pybind11/stl.h"
#include <iostream>

void adds_()
{
	std::cout << ("hello world");
}
PYBIND11_MODULE(pyadd, pyadd)
{
	pyadd.doc() = "pyadd";
	pyadd.def("add", &adds_);
}