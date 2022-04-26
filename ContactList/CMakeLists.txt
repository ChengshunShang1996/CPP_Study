cmake_minimum_required(VERSION 2.8.12)

project(ContactList)

# specify the C++ feature
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(ContactList ContactList.cpp)