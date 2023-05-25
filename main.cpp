#include <iostream>
#include "Solutions.h"

int main() {

    Instance::writefile("solution_test_10", Solutions::random_solutions(10));
    Instance::writefile("solution_test_200", Solutions::random_solutions(200));

    std::vector<City> cities =  Instance::readfile("france_10.tsp");
    Instance::writesolinfile("Glouton10", Solutions::solGloutonnes(cities));

    return 0;
}
