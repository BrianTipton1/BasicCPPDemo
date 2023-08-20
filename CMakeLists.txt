cmake_minimum_required(VERSION 3.26)
project(CPPExampleProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPPExampleProject main.cpp
        Animal/Animal.h
        Helpers/Util/Util.cpp
        Helpers/Util/Util.h
        Animal/Dog/Dog.cpp
        Animal/Dog/Dog.h
        Animal/Horse/Horse.cpp
        Animal/Horse/Horse.h
        Animal/Cat/Cat.cpp
        Animal/Cat/Cat.h
        Helpers/Examples/Examples.cpp
        Helpers/Examples/Examples.h)
