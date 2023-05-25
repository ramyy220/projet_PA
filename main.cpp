#include <iostream>
#include "Instance.h"

int main() {

    std::vector<City> result =  Instance::readfile("france_10.tsp");
    Instance::writesolinfile("solution_test", result);
    return 0;
}
