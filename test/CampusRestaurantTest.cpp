#include "gtest/gtest.h"
#include "../include/BuildCampusRestaurants.h"

using namespace std;

TEST(CampusRestaurantTest, testName) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    EXPECT_EQ(Habit.getName(), "Habit");
}