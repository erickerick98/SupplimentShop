# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(Suppliment)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

add_executable(Suppliment
		${PROJECT_SRC_DIR}/main.cpp
                ${PROJECT_SRC_DIR}/supp.cpp
                ${PROJECT_SRC_DIR}/supp.h)
