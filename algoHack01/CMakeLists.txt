cmake_minimum_required(VERSION 2.8.9)
project(hack)
add_executable(hack main.cpp)
target_compile_features(hack PRIVATE cxx_range_for)

