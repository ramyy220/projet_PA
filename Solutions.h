#include <string>
#include <ostream>
#include "Instance.h"

class Solutions {
public:
    static std::string random_solutions(int nbcities);
    static std::vector<City> solGloutonnes( std::vector<City> cities);
private:
    static float distance(City city1, City city2);
};



