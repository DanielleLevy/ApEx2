cmake_minimum_required(VERSION 2.8.12.2)
add_compile_options(-std=c++11)
project(EX2)

set(CMAKE_CXX_STANDARD 14)

add_executable(EX2
        "Header.h"
        "OutputFunctions.cpp"
        "Main.cpp"
        "Distance.cpp"
        "Distance.h"
        "Sample.cpp"
        "Sample.h"
        "InputAndValidation.cpp" Knn.cpp checkUnclassifiedFiles.cpp)
