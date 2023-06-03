cmake_minimum_required(VERSION 3.25)
project(projet_PA)

set(CMAKE_CXX_STANDARD 17)

add_executable(projet_PA main.cpp City.h City.cpp Instance.h Instance.cpp Solutions.cpp Solutions.h NeighbourSolution.cpp NeighbourSolution.h NeighbourEchange.h NeighbourEchange.cpp NeighbourReinsertion.h NeighbourReinsertion.cpp NeighbourTwoOpt.h NeighbourTwoOpt.cpp)
