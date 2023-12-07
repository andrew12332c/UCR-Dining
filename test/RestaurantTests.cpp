#include "gtest/gtest.h"
#include "../include/Restaurant.h"

using namespace std;

TEST(RestaurantTests, testConstructor) {
    Restaurant testRest;
    EXPECT_EQ(testRest.getLocation(), "none");
}

TEST(RestaurantTests, testLocation) {
    Restaurant testRest;
    testRest.setLocation("HUB");
    EXPECT_EQ(testRest.getLocation(), "HUB");
}

TEST(RestaurantTests, testName) {
    Restaurant testRest;
    testRest.setName("Glasgow Dining Hall");
    EXPECT_EQ(testRest.getName(), "Glasgow Dining Hall");
}
