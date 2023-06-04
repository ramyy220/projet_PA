//
// Created by ramya on 04/06/2023.
//

#include "Iteree.h"
#include "RechercheLocale.h"
#include "PerturberForce.h"

std::vector<City> recherche_locale_iteree(std::vector<City> s, const NeighbourSolution* voisinage, int critere_arret) {
    std::vector<City> meilleure_solution = s;
    bool critere_arret_atteint = false;

    while (!critere_arret_atteint) {
        std::vector<City> solution = RechercheLocale::local_search(meilleure_solution, voisinage);
        if (solution == meilleure_solution) {
            critere_arret_atteint = true;
        } else {
            meilleure_solution = solution;
            s = PerturberForce::perturber_solution(meilleure_solution, voisinage);
        }
    }

    return meilleure_solution;
}

