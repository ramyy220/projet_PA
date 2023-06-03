#ifndef PROJET_PA_NEIGHBOURECHANGE_H
#define PROJET_PA_NEIGHBOURECHANGE_H
#include "NeighbourSolution.h"


class NeighbourEchange : public NeighbourSolution{
public:
    std::vector<City> exchange_by_index ( std::vector<City> s, int index);
    std::vector<City> exchange ( std::vector<City> s, int i,int j);
    std::vector<City> upgrade( std::vector<City> cities, int index) override;
    NeighbourEchange();



};
#endif //PROJET_PA_NEIGHBOURECHANGE_H


