//
// Created by ramya on 04/06/2023.
//

#include "PremiereAmeliorante.h"
#include "Solutions.h"

PremiereAmeliorante::PremiereAmeliorante() {};

std::vector<City> PremiereAmeliorante::local_search(std::vector<City> s, NeighbourSolution *voisinage) {
    float meilleure_distance = Solutions::compute_score(s);
    std::vector<City> meilleure_solution = s;

    for (int i = 0; i < s.size(); i++) {
        std::vector<City> solution_voisine = voisinage->upgrade(s, i);
        float distance_voisine = Solutions::compute_score(solution_voisine);

        if (distance_voisine < meilleure_distance) {
            meilleure_distance = distance_voisine;
            meilleure_solution = solution_voisine;
            break;
        }
    }

    return meilleure_solution;
}
