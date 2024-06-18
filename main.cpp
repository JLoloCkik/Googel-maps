#include <iostream>
#include <vector>
#include "Country.h"
#include "Country.cpp"

int main() {
    Country country;

    double dWidth1;
    double dLength1;
    double dWidth2;
    double dLength2;

    std::cout << "Az opciók közül válaszd ki, hogy honnan szeretnél indulni:\n";
    for (const auto countryData : country.eu_countries) {
        std::cout << "- " << countryData.name << "\n";
    }
    std::cin >> country.start_country;

    bool found = false;
    for (const auto& countryData : country.eu_countries) {
        if (countryData.name == country.start_country) {
            found = true;
            dWidth1 = countryData.dWidth ;
            dLength1 = countryData.dLength;
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
            dWidth2 = countryData.dWidth ;
            dLength2 = countryData.dLength;
            break;
        }
    }


    Convert_radian(dWidth1 ,dLength1 ,dWidth2 ,dLength2);

}
