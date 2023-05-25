#include <string>
#include <ostream>
class City {
public:
    City(std::string name, double latitude, double longitude, int id);

    bool operator==(const City &rhs) const;

    bool operator!=(const City &rhs) const;

    std::string getName();
    double getLatitude();
    double getLongitude();
    int getId();
private:
    std::string name;
    double latitude;
    double longitude;
    int id;
};