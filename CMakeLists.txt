cmake_minimum_required(VERSION 3.11-3.18)

project(
    cpp-Template
    VERSION 1.0
    DESCRIPTION "Mein Cpp-Template compiled mit cmake"
)

include(CTest)

add_subdirectory(src)
#add_subdirectory(include)