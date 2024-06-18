#include <algorithm>
#ifndef GOOGLEMAPS_COUNTRY_H
#define GOOGLEMAPS_COUNTRY_H


class Country {
public:
    std::string start_country;
    std::string target_country;
    double dWidth;
    double dLength;

    struct CountryData {
        std::string name;
        double dWidth;
        double dLength;
    };

    std::vector<CountryData> eu_countries = {
            {"Austria", 47.5162, 14.5501},
            {"Belgium", 50.5039, 4.4699},
            {"Bulgaria", 42.7339, 25.4858},
            {"Croatia", 45.1, 15.2},
            {"Cyprus", 35.1264, 33.4299},
            {"Czech Republic", 49.8175, 15.4730},
            {"Denmark", 56.2639, 9.5018},
            {"Estonia", 58.5953, 25.0136},
            {"Finland", 61.9241, 25.7482},
            {"France", 46.6034, 1.8883},
            {"Germany", 51.1657, 10.4515},
            {"Greece", 39.0742, 21.8243},
            {"Hungary", 47.1625, 19.5033},
            {"Ireland", 53.1424, -7.6921},
            {"Italy", 41.8719, 12.5674},
            {"Latvia", 56.8796, 24.6032},
            {"Lithuania", 55.1694, 23.8813},
            {"Luxembourg", 49.8153, 6.1296},
            {"Malta", 35.9375, 14.3754},
            {"Netherlands", 52.1326, 5.2913},
            {"Poland", 51.9194, 19.1451},
            {"Portugal", 39.3999, -8.2245},
            {"Romania", 45.9432, 24.9668},
            {"Slovakia", 48.6690, 19.6990},
            {"Slovenia", 46.1512, 14.9955},
            {"Spain", 40.4637, -3.7492},
            {"Sweden", 60.1282, 18.6435}
    };
};


#endif //GOOGLEMAPS_COUNTRY_H
