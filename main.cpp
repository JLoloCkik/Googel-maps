#include <iostream>
#include <vector>
#include "Country.h"
#include "Country.cpp"

int main() {
    Country country;

    double latitude1;
    double longitude1;
    double latitude2;
    double longitude2;

    std::cout << "Az opciók közül válaszd ki, hogy honnan szeretnél indulni:\n";
    for (const auto countryData : country.eu_countries) {
        std::cout << "- " << countryData.name << "\n";
    }
    std::cin >> country.start_country;

    bool found = false;
    for (const auto& countryData : country.eu_countries) {
        if (countryData.name == country.start_country) {
            found = true;
            latitude1 = countryData.latitude ;
            longitude1 = countryData.longitude;
            break;
        }
    }



    if (found) {
        std::cout << "Az opciók közül válaszd ki, hogy hova szeretnél menni:\n";
    } else {
        std::cout << "Az euban nem található ilyen ország.\n";
    }

    for (const auto countryData : country.eu_countries) {
        std::cout << "- " << countryData.name << "\n";
    }

    std::cin >> country.target_country;

    for (const auto& countryData : country.eu_countries) {
        if (countryData.name == country.target_country) {
            found = true;
            latitude2 = countryData.latitude ;
            longitude2 = countryData.longitude;
            break;
        }
    }




    double Radlatitude1, Radlongitude1, Radlatitude2, Radlongitude2;

    std::cout << Radlatitude1 << "\n";
    std::cout << Radlongitude1  << "\n";
    std::cout << Radlatitude2  << "\n";
    std::cout << Radlongitude2  << "\n";
    std::cout << "----------------" << "\n";


    convert_radian(latitude1 ,longitude1 ,latitude2 ,longitude2);

    distance_calculator(Radlatitude1, Radlongitude1, Radlatitude2, Radlongitude2);

    direction_calculator(Radlatitude1, Radlongitude1, Radlatitude2, Radlongitude2);


}
