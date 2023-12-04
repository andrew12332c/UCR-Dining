#include "gtest/gtest.h"
#include "../src/RestaurantHours.cpp"
#include <string>

using namespace std;

TEST(RestaurantHoursTests, testConstructor) {
    RestaurantHours hours;
    EXPECT_EQ(hours.getOpenHours(), "not open");
}

TEST(RestaurantHoursTests, testOpenHour) {
    RestaurantHours hours;
    hours.setOpenHours("7pm - 10pm");
    EXPECT_EQ(hours.getOpenHours(), "7pm - 10pm");
}

TEST(RestaurantHoursTests, testPeakHour) {
    RestaurantHours hours;
    hours.setPeakHours("1pm - 2pm");
    EXPECT_EQ(hours.getPeakHours(), "1pm - 2pm");
}

TEST(RestaurantHoursTests, testOffHour) {
    RestaurantHours hours;
    hours.setOffHours("11pm - 8am");
    EXPECT_EQ(hours.getOffHours(), "11pm - 8am");
}

