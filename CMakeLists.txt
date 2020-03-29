cmake_minimum_required(VERSION 3.15)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(CompositeExample main.cpp Component.h Leaf.cpp Leaf.h Composite.cpp Composite.h Color.cpp Color.h)