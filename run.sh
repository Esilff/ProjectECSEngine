#!/bin/bash

if [ ! -d "build" ]; then
    mkdir build
else
    rm -rf build
    mkdir build
fi

echo -e "\e[33mBuilding CMake project\e[0m"

cmake -B ./build -S ./

cd build

make

line=$(head -n 1 project_name.txt)

projectversion=$(echo $line | cut -d'/' -f1)
execname=$(echo $line | cut -d'/' -f2)

echo -e "\e[36mRunning $projectversion \n\e[0m"
./"$execname"
