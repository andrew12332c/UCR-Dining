#include "gtest/gtest.h"
#include "../include/DiningHallDish.h"

using namespace std;

TEST(DiningHallDishTests, testName) {
    vector<Ingredient> ingredients;
    Ingredient rice("Rice", 200, 5);
    Ingredient chicken("Chicken", 100, 50);

    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("Chicken and Rice", ingredients, 100);
    EXPECT_EQ(chickenAndRice.getName(), "Chicken and Rice");
}

TEST(DiningHallDishTests, testCaloriesPos) {
    vector<Ingredient> ingredients;
    Ingredient rice("Rice", 200, 5);
    Ingredient chicken("Chicken", 100, 50);

    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("Chicken and Rice", ingredients, 100);
    EXPECT_EQ(chickenAndRice.getCalories(), 300);
}

TEST(DiningHallDishTests, testCaloriesZero) {
    vector<Ingredient> ingredients;
    Ingredient water("Water", 0, 0);
    Ingredient ice("Ice", 0, 0);

    ingredients.push_back(water);
    ingredients.push_back(ice);

    DiningHallDish icedWater("Iced Water", ingredients, 0);
    EXPECT_EQ(icedWater.getCalories(), 0);
}

TEST(DiningHallDishTests, testProteinPos) {
    vector<Ingredient> ingredients;
    Ingredient rice("Rice", 200, 5);
    Ingredient chicken("Chicken", 100, 50);

    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("Chicken and Rice", ingredients, 100);
    EXPECT_EQ(chickenAndRice.getProtein(), 55);
}

TEST(DiningHallDishTests, testProteinZero) {
    vector<Ingredient> ingredients;
    Ingredient water("Water", 0, 0);
    Ingredient ice("Ice", 0, 0);

    ingredients.push_back(water);
    ingredients.push_back(ice);

    DiningHallDish icedWater("Iced Water", ingredients, 100);
    EXPECT_EQ(icedWater.getProtein(), 0);
}

TEST(DiningHallDishTests, testServingAmount) {
    vector<Ingredient> ingredients;
    Ingredient water("Water", 0, 0);
    Ingredient ice("Ice", 0, 0);

    ingredients.push_back(water);
    ingredients.push_back(ice);

    DiningHallDish icedWater("Iced Water", ingredients, 200);
    EXPECT_EQ(icedWater.getServingAmount(), 200);
}