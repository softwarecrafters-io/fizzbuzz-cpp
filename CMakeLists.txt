cmake_minimum_required(VERSION 3.10)
project(fizzbuzz_project)

set(CMAKE_CXX_STANDARD 11)

# Define el ejecutable para tu aplicación
add_executable(main main.cpp fizzbuzz.cpp)

# Define el ejecutable para tus pruebas
add_executable(tests tests.cpp fizzbuzz.cpp)

# Enlaza las pruebas con Catch2
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})