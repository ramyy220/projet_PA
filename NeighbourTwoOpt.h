//
// Created by ramya on 03/06/2023.
//

#ifndef PROJET_PA_NEIGHBOURTWOOPT_H
#define PROJET_PA_NEIGHBOURTWOOPT_H
#include "NeighbourSolution.h"

class NeighbourTwoOpt {
public:
    std::vector<City> twoopt_by_index ( std::vector<City> s, int index);
    std::vector<City> twoopt ( std::vector<City> s, int i,int j);
    std::vector<City> upgrade( std::vector<City> cities, int index);
    NeighbourTwoOpt();

};


#endif //PROJET_PA_NEIGHBOURTWOOPT_H
