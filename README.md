#Pybind11
*This is a short Tutorial in which we make a simple python module from C++ program*

<div style="text-align: center">
<img src="" alt="front pybind11" width="200">
</div>

## Table of Contents
1. [Usage](#Usage)
2. [Short Tutorial](#short-tutorial)

## Usage
The pybind11 module is a powerful tool which allows us to make python module from C++ program
Note that for this purpose, we must use pybind11 

* From [github_pybind11](https://github.com/pybind/pybind11.git) clone the repository in your local

		git clone https://github.com/pybind/pybind11.git

## Short Tutorial
Let try this example :
In the same directory (in which you cloned the pybind11 repository) :
* Create a CMakeLists.txt file :
		
		nano CMakeLists.txt

The CMakeLists.txt must contain : 
		
		cmake_minimum_required(VERSION 3.4)
		project(example)
		add_subdirectory(pybind11)
		pybind11_add_module(your_module_name main.cpp)

* Create or upload your c++ file, this is a simple c++ program which multiply 2 floats :

		nano main.cpp
		
		#include<pybind11/pybind11.h>
		namespace py = pybind11

		float mutiply ( float x, float y){
		return x*y;
		}

		PYBIND11_MODULE(your_module_name, m){
		m.doc() = "To make some Multiplication !!";
		m.def("mult", & multiply); 
		}

After creating main.cpp file, you need to make a new directory, name it "build"
* Create build dir:
		
		mkdir build
		cd build

* Use cmake command, if you do not install it, try this command:
	
		sudo apt install cmake

* After installing Cmake, execute those commands:

		cmake ..
		make

* Finaly, you get your module named "your_module_name", you can see it:
		
		ls -la

* Use your module with python now : 
		
		ipython
		>> import your_module_name
