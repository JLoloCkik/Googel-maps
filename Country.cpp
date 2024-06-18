#include "Country.h"
#include <cmath>
bool Convert_radian(double dWidth1 ,double dLength1,double dWidth2 ,double dLength2){
    double RadWidth1 = dWidth1 * M_PI / 180;
    double RadLength1 = dLength1 * M_PI / 180;
    double RadWidth2 = dWidth2 * M_PI / 180;
    double RadLength2 = dLength2 * M_PI / 180;



    Distance_calculation(RadWidth1, RadLength1, RadWidth2, RadLength2);


};

double Distance_calculation(double RadWidth1 ,double RadLength1,double RadWidth2 ,double RadLength2){
    double distance;
    double r = 6378.137;


    distance = 2 * r * asin(sqrt(1 - cos(RadWidth2 - RadWidth1) + cos(RadWidth1) * cos(RadWidth2) * (1 - cos(RadLength2 - RadLength1)) ));

    std::cout << distance << "\n";

};
