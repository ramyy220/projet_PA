//
// Created by ramya on 03/06/2023.
//

#include "NeighbourTwoOpt.h"

NeighbourTwoOpt ::NeighbourTwoOpt() {};

std::vector<City> NeighbourTwoOpt ::twoopt(std::vector<City> s, int i, int j) {
    std::vector<City> newSolution = s;
    std::reverse(newSolution.begin() + i, newSolution.begin() + j + 1);
    return newSolution;

}

std::vector<City> NeighbourTwoOpt ::twoopt_by_index(std::vector<City> s, int index) {
    int n = static_cast<int>((1 + std::sqrt(1 + 8 * index)) / 2);
    int i = index - (n * (n - 1)) / 2;
    int j = s.size() - n + i;
    return twoopt(s, i, j);

}

std::vector<City> NeighbourTwoOpt ::upgrade(std::vector<City> cities, int index) {
    return twoopt_by_index(cities, index);

}
