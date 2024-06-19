#include <algorithm>
#include <string>
#include <vector>
#ifndef GOOGLEMAPS_COUNTRY_H
#define GOOGLEMAPS_COUNTRY_H


class Country {
public:
    std::string start_country;
    std::string target_country;
    double latitude;
    double longitude;

    struct CountryData {
        std::string name;
        double latitude;
        double longitude;
    };

    std::vector<CountryData> eu_countries = {
            {"Austria", 48.2082, 16.3738},
            {"Belgium", 	50.8503, 4.3517},
            {"Bulgaria", 42.6977, 23.3219},
            {"Croatia", 45.815, 15.9819},
            {"Cyprus", 35.1856, 33.3823},
            {"Czech Republic", 50.0755, 14.4378},
            {"Denmark", 55.6867, 12.5701},
            {"Estonia", 59.4370, 24.7536},
            {"Finland", 60.1699, 24.9384},
            {"France", 48.8566, 2.3522},
            {"Germany", 52.5200, 13.4050},
            {"Greece", 37.9838, 23.7275},
            {"Hungary", 47.4979, 19.0402},
            {"Ireland", 53.3498, -6.2603},
            {"Italy", 41.9028, 12.4964},
            {"Latvia", 56.9496, 24.1052},
            {"Lithuania", 54.6872, 25.2797},
            {"Luxembourg", 49.6116, 6.1319},
            {"Malta", 35.9375, 14.3754},
            {"Netherlands", 52.3676, 4.8952},
            {"Poland", 52.2370, 21.0175},
            {"Portugal", 38.7223, -9.1393},
            {"Romania", 44.4268, 26.1025},
            {"Slovakia", 48.1486, 17.1077},
            {"Slovenia", 46.0569, 14.5058},
            {"Spain", 40.4168, -3.7038},
            {"Sweden", 59.3293, 18.0686}

    };


};


bool convert_radian(double latitude1 ,double longitude1,double latitude2 ,double longitude2);
double distance_calculator(double Radlatitude1 ,double Radlongitude1,double Radlatitude2 ,double Radlongitude2);
double direction_calculator(double Radlatitude1, double Radlongitude1, double Radlatitude2, double Radlongitude2);


#endif //GOOGLEMAPS_COUNTRY_H
