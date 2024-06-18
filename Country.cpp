#include "Country.h"
#include <cmath>
bool Convert_radian(double dWidth1 ,double dLength1,double dWidth2 ,double dLength2){
    double RadWidth1 = dWidth1 * M_PI / 180;
    double RadLength1 = dLength1 * M_PI / 180;
    double RadWidth2 = dWidth2 * M_PI / 180;
    double RadLength2 = dLength2 * M_PI / 180;


    Distance_calculation(RadWidth1, RadLength1, RadWidth2, RadLength2);

}

double Distance_calculation(double RadWidth1 ,double RadLength1,double RadWidth2 ,double RadLength2){
    double distance;
    double direction;
    double r = 6378.137;


    distance = 2 * r * asin(sqrt(1 - cos(RadWidth2 - RadWidth1) + cos(RadWidth1) * cos(RadWidth2) * (1 - cos(RadLength2 - RadLength1)) ));

    direction = atan2(sin(RadLength1 - RadLength2) * cos(RadWidth2),cos(RadWidth1) * sin(RadWidth2) - sin(RadWidth1) * cos(RadWidth2) * cos(RadLength1 - RadLength2));

    direction = direction * 180.0 / M_PI;
    direction = fmod(direction + 360.0, 360.0);
    std::cout << distance << "km" <<"\n";
    std::cout << direction << "°" << "\n";

}
