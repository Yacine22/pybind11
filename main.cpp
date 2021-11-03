#include<pybind11/pybind11.h>

namespace py = pybind11; 


float multiply(float x, float y){
	return x * y ;
	}

PYBIND11_MODULE(my_module, m){
	m.doc() = "This is my Module"; 
	m.def("mult", & multiply); 
}
