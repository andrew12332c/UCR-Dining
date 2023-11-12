#include "gtest/gtest.h"
#include "../Ingredient.h"

using namespace std;

TEST(IngredientTests, testName) {
    Ingredient Rice("Rice", 1, 0);
    EXPECT_EQ(Rice.getName(), "Rice");
}

TEST(IngredientTests, testCaloriesPos) {
    Ingredient Rice("Rice", 130, 0);
    EXPECT_EQ(Rice.getCalories(), 130);
}

TEST(IngredientTests, testCaloriesZero) {
    Ingredient Rice("Rice", 0, 0);
    EXPECT_EQ(Rice.getCalories(), 0);
}

TEST(IngredientTests, testProteinPos) {
    Ingredient Rice("Chicken", 100, 50);
    EXPECT_EQ(Rice.getProtein(), 50);
}

TEST(IngredientTests, testProteinZero) {
    Ingredient Rice("Chicken", 100, 0);
    EXPECT_EQ(Rice.getProtein(), 0);
}
