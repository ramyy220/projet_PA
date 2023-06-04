//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_RECHERCHELOCALE_H
#define PROJET_PA_RECHERCHELOCALE_H


#include <vector>
#include "City.h"
#include "NeighbourSolution.h"



class RechercheLocale {
public:
public:
    virtual ~RechercheLocale() = default;
    virtual std::vector<City> local_search(std::vector<City> s, NeighbourSolution *voisinage) = 0;

};


#endif //PROJET_PA_RECHERCHELOCALE_H
