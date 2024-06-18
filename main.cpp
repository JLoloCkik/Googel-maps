#include <iostream>
#include <vector>
#include "Country.h"
#include "Country.cpp"

int main() {
    Country country;

    double Width1;
    double Length1;
    double Width2;
    double Length2;

    std::cout << "Az opciók közül válaszd ki, hogy honnan szeretnél indulni:\n";
    for (const auto countryData : country.eu_countries) {
        std::cout << "- " << countryData.name << "\n";
    }
    std::cin >> country.start_country;

    bool found = false;
    for (const auto& countryData : country.eu_countries) {
        if (countryData.name == country.start_country) {
            found = true;
            Width1 = countryData.Width ;
            Length1 = countryData.Length;
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
            Width2 = countryData.Width ;
            Length2 = countryData.Length;
            break;
        }
    }


    Convert_radian(Width1 ,Length1 ,Width2 ,Length2);

}
