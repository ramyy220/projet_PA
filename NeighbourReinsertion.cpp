//
// Created by ramya on 03/06/2023.
//

#include "NeighbourReinsertion.h"

NeighbourReinsertion ::NeighbourReinsertion() {};

std::vector<City> NeighbourReinsertion ::reinsertion(std::vector<City> s, int i, int j) {
    std::vector<City> newSolution = s;
    City cityToInsert = newSolution[i];
    newSolution.erase(newSolution.begin() + i);
    newSolution.insert(newSolution.begin() + j, cityToInsert);
    return newSolution;

}

std::vector<City> NeighbourReinsertion ::reinsertion_by_index(std::vector<City> s, int index) {
    int n = s.size();
    int i, j;
    if (index <= n - 2) {
        i = 0;
        j = index + 1;
    } else {
        i = (index - 1) / (n - 2);
        j = (index - 1) % (n - 2);
        if (j >= i - 1) {
            j = j + 2;
        }
    }
    return reinsertion(s, i, j);

}

std::vector<City> NeighbourReinsertion ::upgrade(std::vector<City> cities, int index) {
    return reinsertion_by_index(cities, index);

}
