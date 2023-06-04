//
// Created by ramya on 04/06/2023.
//

#include "PremiereAmelioranteAleatoire.h"
#include "Solutions.h"

PremiereAmelioranteAleatoire::PremiereAmelioranteAleatoire() {};

std::vector<City> PremiereAmelioranteAleatoire::local_search(std::vector<City> s, NeighbourSolution *voisinage) {
    float meilleure_distance = Solutions::compute_score(s);
    std::vector<City> meilleure_solution = s;

    std::vector<int> indices(s.size());
    std::iota(indices.begin(), indices.end(), 0);
    std::random_shuffle(indices.begin(), indices.end());

    for (int i = 0; i < indices.size(); i++) {
        std::vector<City> solution_voisine = voisinage->upgrade(s, indices[i]);
        float distance_voisine = Solutions::compute_score(solution_voisine);

        if (distance_voisine < meilleure_distance) {
            meilleure_distance = distance_voisine;
            meilleure_solution = solution_voisine;
            break;
        }
    }

    return meilleure_solution;
}
