//
// Created by ramya on 04/06/2023.
//

#include "PerturberForce.h"

std::vector<City> perturber_solution(const std::vector<City>& solution, NeighbourSolution *voisinage, int force) {
    std::vector<City> nouvelle_solution = solution;
    for (int i = 0; i < force; i++) {
        voisinage->upgrade(nouvelle_solution, force);
    }
    return nouvelle_solution;
}

