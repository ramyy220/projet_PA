//
// Created by ramya on 02/06/2023.
//


#include "NeighbourEchange.h"

NeighbourEchange::NeighbourEchange() {};
std::vector<City> NeighbourEchange::exchange ( std::vector<City> s, int i,int j){
    std::vector<City> newSolution = s;
    std::swap(newSolution[i], newSolution[j]);
    return newSolution;
}
std::vector<City> NeighbourEchange::exchange_by_index( std::vector<City> s, int index) {


    int n = (1 + sqrt(1 + 8 * index)) / 2;
    int i = index - (n * (n - 1)) / 2;
    int j = s.size() - n + i;
    return exchange(s, i, j);
}
std::vector<City> NeighbourEchange::upgrade(std::vector<City> cities, int index) {
    return exchange_by_index(cities,index);

}




