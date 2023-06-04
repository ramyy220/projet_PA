//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_PREMIEREAMELIORANTE_H
#define PROJET_PA_PREMIEREAMELIORANTE_H
#include "RechercheLocale.h"

class PremiereAmeliorante : public RechercheLocale{
public:
    PremiereAmeliorante();
    std::vector<City> local_search(std::vector<City> s, NeighbourSolution *voisinage);

};


#endif //PROJET_PA_PREMIEREAMELIORANTE_H
