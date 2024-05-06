#!/bin/bash

clang++ -o ./build/$1 src/**/*.cpp ./examples/$1/main.cpp
./build/$1
