#include <iostream>
#include <vector>
#include "Country.h"
#include "Country.cpp"

int main() {
    Country country;

    double dWidth;
    double dLength;

    std::cout << "Az opciók közül válaszd ki, hogy honnan szeretnél indulni:\n";
    for (const auto countryData : country.eu_countries) {
        std::cout << "- " << countryData.name << "\n";
    }
    std::cin >> country.start_country;

    bool found = false;
    for (const auto& countryData : country.eu_countries) {
        if (countryData.name == country.start_country) {
            found = true;
            dWidth = countryData.dWidth ;
            dLength = countryData.dLength;
            break;
        }
    }
    std::cout << dWidth << "\n";
    std::cout << dLength << "\n";

    Convert_radian(dWidth ,dLength);

}
