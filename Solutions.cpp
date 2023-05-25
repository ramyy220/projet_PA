#include <iostream>
#include <numeric>
#include <iterator>
#include <vector>
#include <algorithm>
#include <random>
#include "Solutions.h"

std::string Solutions::random_solutions(int nbcities) {
    std::vector<int>random(nbcities);
    std::iota(std::begin(random), std::end(random), 0);
    std::shuffle(std::begin(random), std::end(random), std::default_random_engine {});
    std::string random_solution;
    for(int number : random) {
        random_solution += std::to_string(number) + " ";
    }
    return random_solution;
}
float Solutions::distance(City city1, City city2) {
    return 6378.137 * acos(
            sin(city1.getLatitude()) *
            sin(city2.getLatitude()) +
            cos(city1.getLatitude()) *
            cos(city2.getLatitude()) *
            cos(city2.getLongitude() - city1.getLongitude())
    );
}
std::vector<City> Solutions::solGloutonnes( std::vector<City> cities){
    std::vector<City> solution;
    std::vector<City> citiesCopy = cities;
    solution.push_back(citiesCopy.at(0));
    citiesCopy.erase(citiesCopy.begin());
    while (!citiesCopy.empty()){
        City bestcity = citiesCopy.at(0);
        float bestdistance = distance(solution.back(), bestcity);
        for (int i = 1; i < citiesCopy.size() ; i++) {
            float newdistance = distance(solution.back(), citiesCopy.at(i));
            if (newdistance < bestdistance){
                bestcity = citiesCopy.at(i);
                bestdistance = newdistance;
            }
        }
        solution.push_back(bestcity);
        citiesCopy.erase(std::find(citiesCopy.begin(), citiesCopy.end(), bestcity));
    }
    return solution;
}

