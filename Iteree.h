//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_ITEREE_H
#define PROJET_PA_ITEREE_H
#include "RechercheLocale.h"


class Iteree : public RechercheLocale {
public:
    Iteree();

    std::vector<City>
    recherche_locale_iteree(std::vector<City> s, const NeighbourSolution *voisinage, int critere_arret);

};
#endif //PROJET_PA_ITEREE_H
