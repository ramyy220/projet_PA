#ifndef PROJET_PA_INSTANCE_H
#define PROJET_PA_INSTANCE_H

#include <vector>
#include <string>
#include "City.h"

class Instance {
public:
    Instance();
   static std::vector<City> readfile(std::string filename);
   static void writefile(std::string filename, std::string sol);
   static void writesolinfile(std::string filename,std::vector<City> solution );
private:
    static float convert(float degrees);
};
#endif //PROJET_PA_INSTANCE_H