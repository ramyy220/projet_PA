//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_MEILLEUREAMELIORANTE_H
#define PROJET_PA_MEILLEUREAMELIORANTE_H


#include "RechercheLocale.h"

class MeilleureAmeliorante : public RechercheLocale{
public:
    MeilleureAmeliorante();
    std::vector<City> local_search(std::vector<City> s, NeighbourSolution *voisinage);


};


#endif //PROJET_PA_MEILLEUREAMELIORANTE_H
