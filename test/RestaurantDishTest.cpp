#include "gtest/gtest.h"
#include "../src/RestaurantDish.cpp"

using namespace std;

TEST(RestaurantDishTests, testName) {
    RestaurantDish dish("burger", 500, 30, 8);
    EXPECT_EQ(dish.getName(), "burger");
}

TEST(RestaurantDishTests, testCaloriesPos) {
    RestaurantDish dish("burger", 500, 30, 8);
    EXPECT_EQ(dish.getCalories(), 500);
}

TEST(RestaurantDishTests, testCaloriesZero) {
    RestaurantDish dish("water", 0, 0, 0);
    EXPECT_EQ(dish.getCalories(), 0);
}

TEST(RestaurantDishTests, testProteinPos) {
    RestaurantDish dish("burger", 500, 30, 8);
    EXPECT_EQ(dish.getProtein(), 30);
}

TEST(RestaurantDishTests, testProteinZero) {
    RestaurantDish dish("water", 0, 0, 0);
    EXPECT_EQ(dish.getProtein(), 0);
}

TEST(RestaurantDishTests, testPricePos) {
    RestaurantDish dish("burger", 500, 30, 8);
    EXPECT_EQ(dish.getPrice(), 8);
}

TEST(RestaurantDishTests, testPriceZero) {
    RestaurantDish dish("water", 0, 0, 0);
    EXPECT_EQ(dish.getProtein(), 0);
}