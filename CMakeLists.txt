cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDAR 20)
set(CMAKE_CXX_STANDAR_REQUIRED ON)

project(lista VERSION 1.0)
add_executable(main main.cpp Node.h Lista.cpp Lista.h Hijo.h Node.cpp)