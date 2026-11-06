cmake_minimum_required(VERSION 3.20)
project(cpp_algorithms CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task01 algorithms/01_second_largest.cpp)
add_executable(task02 algorithms/02_frequency.cpp)
add_executable(task03 algorithms/03_two_sum.cpp)
add_executable(task04 algorithms/04_binary_search.cpp)
add_executable(task05 algorithms/05_brackets.cpp)
add_executable(task06 algorithms/06_range_sum.cpp)
add_executable(test_vector tests/test_vector.cpp)
add_executable(task07 algorithms/07_subsets.cpp)

