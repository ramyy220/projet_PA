//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_VOISINAGEVARIABLE_H
#define PROJET_PA_VOISINAGEVARIABLE_H
#include "RechercheLocale.h"

class VoisinageVariable : public RechercheLocale{
public:
    VoisinageVariable();
    std::vector<City> local_search(std::vector<City> s, NeighbourSolution *voisinage);
};


#endif //PROJET_PA_VOISINAGEVARIABLE_H
