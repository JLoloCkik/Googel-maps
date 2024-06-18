#include "Country.h"
#include <cmath>
bool Convert_radian(double dWidth ,double dLength){
    double RadWidth = dWidth * M_PI / 180;
    double RadLength = dLength * M_PI / 180;

    std::cout << RadWidth << "\n";
    std::cout << RadLength << "\n";
    return RadWidth ,RadLength;
};