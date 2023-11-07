cmake_minimum_required(VERSION 3.27)

project(PortableSaveFile)

include_directories("include")

add_library(psf SHARED src/psf.cpp)