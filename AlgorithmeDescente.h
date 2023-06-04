//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_ALGORITHMEDESCENTE_H
#define PROJET_PA_ALGORITHMEDESCENTE_H
#include "RechercheLocale.h"

class AlgorithmeDescente : public RechercheLocale{
public:
    AlgorithmeDescente();
    std::vector<City> local_search(std::vector<City> s, NeighbourSolution *voisinage);

};


#endif //PROJET_PA_ALGORITHMEDESCENTE_H
