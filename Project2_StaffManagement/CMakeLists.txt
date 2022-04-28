cmake_minimum_required(VERSION 2.8.12)

project(MainStaffManager)

# specify the C++ feature
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SM_CORE
    MainStaffManager.cpp
    workerManager.cpp
    workerManager.h
)

# add the executable
add_executable(MainStaffManager ${SM_CORE})