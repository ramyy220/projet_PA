//
// Created by ramya on 03/06/2023.
//

#ifndef PROJET_PA_NEIGHBOURREINSERTION_H
#define PROJET_PA_NEIGHBOURREINSERTION_H
#include "NeighbourSolution.h"

class NeighbourReinsertion : public NeighbourSolution{
public:
    std::vector<City> reinsertion_by_index ( std::vector<City> s, int index);
    std::vector<City> reinsertion ( std::vector<City> s, int i,int j);
    std::vector<City> upgrade( std::vector<City> cities, int index) override;
    NeighbourReinsertion();


};


#endif //PROJET_PA_NEIGHBOURREINSERTION_H
