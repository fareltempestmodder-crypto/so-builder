cmake_minimum_required(VERSION 3.18.1)
project("hardening")
add_library(${CMAKE_PROJECT_NAME} SHARED native-lib.cpp)
