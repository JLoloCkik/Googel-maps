#include "Country.h"

#include <cmath>
#include <gtest/gtest.h>

using ljankai::convert_radian;
using ljankai::direction_calculator;

TEST(CountryTest, ConvertRadian0Degrees) {
  EXPECT_EQ(convert_radian(0), 0);
}

TEST(CountryTest, ConvertRadian180Degrees) {
  EXPECT_EQ(convert_radian(180), M_PI);
}
TEST(CountryTest, ConvertRadian360Degrees) {
  EXPECT_EQ(convert_radian(360), 2 * M_PI);
}
TEST(CountryTest, DirectionCalculatorNorth) {
  EXPECT_EQ(direction_calculator(0, 0, 90, 0), 0);
}
TEST(CountryTest, DirectionCalculatorFromSouthNorth) {
  EXPECT_EQ(direction_calculator(-90, 0, 90, 0), 0);
}
TEST(CountryTest, DirectionCalculatorWest) {
  EXPECT_EQ(direction_calculator(0, 0, 0, -90), 270);
}
TEST(CountryTest, DirectionCalculatorNorthEasth) {
  EXPECT_EQ(direction_calculator(0, 0, 1, 1), 1);
}