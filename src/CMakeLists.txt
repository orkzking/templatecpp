cmake_minimum_required(VERSION 3.11-3.18)

project(cpp-Template)

add_executable(template ExampleClass.cpp main.cpp)

target_include_directories(template PUBLIC ../include/example)

target_compile_features(template PUBLIC cxx_std_20)