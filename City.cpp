#include "City.h"

City::City(std::string name, double latitude, double longitude, int id) {
    this->name = name;
    this->latitude = latitude;
    this->longitude = longitude;
    this->id = id;
}
std::string City::getName() {
    return name;
}
double City::getLatitude() {
    return latitude;
}
double City::getLongitude() {
    return longitude;
}
int City::getId() {
    return id;
}