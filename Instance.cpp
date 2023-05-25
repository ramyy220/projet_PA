#include <fstream>
#include <iostream>
#include "Instance.h"

 std::string directory_name = "../ressources/tsp_files/";
 std::string solutions_directory_name = "../ressources/solutions/";

 float Instance::convert(float degrees) {
     return (3.141592*degrees)/180;
 }

std::vector<City> Instance::readfile(std::string filename) {

    std::ifstream file(directory_name+ filename);
    int nbcities;
    file >> nbcities;
    std::vector<City> cities;
    for (int i = 0; i < nbcities ; i++) {
        float latitude;
        float longitude;
        std::string name;
        file>>name>>latitude>>longitude;
        std::cout << name << " " << latitude << " " << longitude << " " << i << " " << std::endl; // A enlever à la fin du projet
        City newcity = City(name, convert(latitude), convert(longitude),i);
        cities.push_back(newcity); //ajoute a la fin de mon vecteur
    }
    return  cities;

}
void Instance::writefile(std::string filename, std::string sol){
    std::ofstream file(solutions_directory_name+ filename);
    file << sol;
}
void Instance::writesolinfile(std::string filename, std::vector<City> solution) {
    std::string answer;
    for (City city: solution) {
        answer += std::to_string(city.getId()) + " ";
    }
    writefile(filename, answer);
}