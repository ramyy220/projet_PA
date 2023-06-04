//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_PERTURBERFORCE_H
#define PROJET_PA_PERTURBERFORCE_H
#include "RechercheLocale.h"


class PerturberForce : public RechercheLocale{
public:
    PerturberForce();
    std::vector<City> perturber_solution(const std::vector<City>& solution, const NeighbourSolution* voisinage, int force);



};


#endif //PROJET_PA_PERTURBERFORCE_H
