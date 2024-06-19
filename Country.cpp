#include "Country.h"
#include <cmath>
#include <iostream>
bool convert_radian(double latitude1 ,double longitude1,double latitude2 ,double longitude2){
    double Radlatitude1 = latitude1 * M_PI / 180;
    double Radlongitude1 = longitude1 * M_PI / 180;
    double Radlatitude2 = latitude2 * M_PI / 180;
    double Radlongitude2 = longitude2 * M_PI / 180;

    std::cout << Radlatitude1 << "\n";
    std::cout << Radlongitude1 << "\n";
    std::cout << Radlatitude2 << "\n";
    std::cout << Radlongitude2 << "\n";
    return  Radlatitude1, Radlongitude1, Radlatitude2, Radlongitude2;

};

double distance_calculator(double Radlatitude1 ,double Radlongitude1,double Radlatitude2 ,double Radlongitude2){
    double distance;
    double r = 6378.137;
    distance = 2 * r * asin(sqrt(1 - cos(Radlatitude2 - Radlatitude1) + cos(Radlatitude1) * cos(Radlatitude2)
    * (1 - cos(Radlongitude2 - Radlongitude1)) ));

    std::cout << distance << "km" <<"\n";
    return distance;

};
double direction_calculator(double Radlatitude1 ,double Radlongitude1,double Radlatitude2 ,double Radlongitude2) {

    double direction;

    direction = atan2(sin(Radlongitude1 - Radlongitude2) * cos(Radlatitude2),cos(Radlatitude1) *
    sin(Radlatitude2) - sin(Radlatitude1) * cos(Radlatitude2) * cos(Radlongitude1 - Radlongitude2));

    direction = direction * 180.0 / M_PI;
    direction = fmod(direction + 360.0, 360.0);

    std::cout << direction << "°" << "\n";
    return direction;
}