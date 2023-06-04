//
// Created by ramya on 04/06/2023.
//

#include "VoisinageVariable.h"
#include "Solutions.h"
#include "AlgorithmeDescente.h"

VoisinageVariable::VoisinageVariable() {};

std::vector<City> VoisinageVariable::local_search(std::vector<City> s, NeighbourSolution *voisinages) {
    std::vector<City> meilleure_sol = s;
    float meilleure_dis = Solutions::compute_score(s);
    for (int i = 0; i < s.size(); i++) {
        const NeighbourSolution* voisinage ; voisinages;
        std::vector<City> solution = new AlgorithmeDescente(s, i);
        float distance_solution = Solutions::compute_score(solution);

        if (distance_solution < meilleure_dis) {
            meilleure_dis = distance_solution;
            meilleure_sol = solution;
        }
    }

    return meilleure_sol;
    }

