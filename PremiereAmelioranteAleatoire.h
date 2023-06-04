//
// Created by ramya on 04/06/2023.
//

#ifndef PROJET_PA_PREMIEREAMELIORANTEALEATOIRE_H
#define PROJET_PA_PREMIEREAMELIORANTEALEATOIRE_H
#include "RechercheLocale.h"


class PremiereAmelioranteAleatoire : public RechercheLocale{
public:
    PremiereAmelioranteAleatoire();
    std::vector<City> local_search(std::vector<City> s, NeighbourSolution *voisinage);

};


#endif //PROJET_PA_PREMIEREAMELIORANTEALEATOIRE_H
