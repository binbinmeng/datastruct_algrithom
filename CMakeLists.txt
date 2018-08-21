cmake_minimum_required(VERSION 2.8)
project(data_struct_algrithom)

set(CMAKE_CXX_STANDARD 11)

add_executable(data_struct_algrithom main.cpp ArrayStack.cc ArrayStack.h ListStack.cc ListStack.h SharedStack.cc SharedStack.h SingleDirectionList.cc SingleDirectionList.h BinaryTree.cc BinaryTree.h DoubleDirectionList.cc DoubleDirectionList.h)