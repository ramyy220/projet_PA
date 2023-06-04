//
// Created by ramya on 04/06/2023.
//

#include "MeilleureAmeliorante.h"
#include "Solutions.h"


MeilleureAmeliorante ::MeilleureAmeliorante() {};
std::vector<City> MeilleureAmeliorante::local_search(std::vector<City> s, NeighbourSolution *voisinage){
    std::vector<City> meilleure_solution = s;
    float meilleure_distance = Solutions::compute_score(s);

    for (int i = 0; i < s.size(); i++) {
        std::vector<City> solution_voisine = voisinage->upgrade(s, i);
        float distance_voisine = Solutions::compute_score(solution_voisine);

        if (distance_voisine < meilleure_distance) {
            meilleure_solution = solution_voisine;
            meilleure_distance = distance_voisine;
        }
    }

    return meilleure_solution;
}