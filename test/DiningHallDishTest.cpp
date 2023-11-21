#include "gtest/gtest.h"
#include "../DiningHallDish.cpp"

using namespace std;

TEST(DiningHallDishTests, testName) {
    vector<Ingredient*> ingredients;
    Ingredient *rice = new Ingredient("Rice", 200, 5);
    Ingredient *chicken = new Ingredient("Chicken", 100, 50);

    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("chickenAndRice", ingredients, 100);
    EXPECT_EQ(chickenAndRice.getName(), "chickenAndRice");
}

TEST(DiningHallDishTests, testCalories) {
    vector<Ingredient*> ingredients;
    Ingredient *rice = new Ingredient("Rice", 200, 5);
    Ingredient *chicken = new Ingredient("Chicken", 100, 50);

    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("chickenAndRice", ingredients, 100);
    EXPECT_EQ(chickenAndRice.getCalories(), 300);
}

TEST(DiningHallDishTests, testProtein) {
    vector<Ingredient*> ingredients;
    Ingredient *rice = new Ingredient("Rice", 200, 5);
    Ingredient *chicken = new Ingredient("Chicken", 100, 50);

    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("chickenAndRice", ingredients, 100);
    EXPECT_EQ(chickenAndRice.getProtein(), 55);
}