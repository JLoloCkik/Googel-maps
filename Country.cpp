#include "Country.h"
#include <cmath>
#include <iostream>

namespace ljankai
{
    
constexpr double kRadius = 6378.137;

double convert_radian(double degree){
  return degree * M_PI / 180; 
};

double distance_calculator(double radlatitude1, double radlongitude1, double radlatitude2, double radlongitude2){  
  return 2 * kRadius * asin(sqrt(1 - cos(radlatitude2 - radlatitude1) + cos(radlatitude1) * cos(radlatitude2)
      * (1 - cos(radlongitude2 - radlongitude1)) ));
};
double direction_calculator(double radlatitude1, double radlongitude1, double radlatitude2, double radlongitude2) { 


  double direction = atan2(sin(radlongitude2 - radlongitude1) * cos(radlatitude2),cos(radlatitude1) *
      sin(radlatitude2) - sin(radlatitude1) * cos(radlatitude2) * cos(radlongitude2 - radlongitude1));

  direction = direction * 180.0 / M_PI;
  return fmod(direction + 360.0, 360.0);
}
} // namespace ljankai