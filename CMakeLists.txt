cmake_minimum_required(VERSION 3.4)
project(pybind11)
add_subdirectory(pybind11)
pybind11_add_module(my_module main.cpp)
