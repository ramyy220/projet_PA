#ifndef PROJET_PA_NEIGHBOURSOLUTION_H
#define PROJET_PA_NEIGHBOURSOLUTION_H
#include <iostream>
#include <numeric>
#include <iterator>
#include <vector>
#include <algorithm>
#include <random>
#include "City.h"


class NeighbourSolution {
public:
    virtual std::vector<City> upgrade( std::vector<City> cities, int index) = 0;


};

#endif //PROJET_PA_NEIGHBOURSOLUTION_H



