#ifndef PROJET_PA_SOLUTIONS_H
#define PROJET_PA_SOLUTIONS_H


#include <string>
#include <ostream>
#include "Instance.h"

class Solutions {
public:
    static std::string random_solutions(int nbcities);
    static std::vector<City> solGloutonnes( std::vector<City> cities);

    static float distance(City city1, City city2);
    static unsigned int compute_score(std::vector<City> cities);
};

#endif //PROJET_PA_SOLUTIONS_H



