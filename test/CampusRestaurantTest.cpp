#include "gtest/gtest.h"
#include "../include/BuildCampusRestaurants.h"

using namespace std;

TEST(CampusRestaurantTest, testName) {
    CampusRestaurant habit = BuildCampusRestaurants::buildHabit();
    EXPECT_EQ(habit.getName(), "Habit");
}

TEST(CampusRestaurantTest, testLocation) {
    CampusRestaurant habit = BuildCampusRestaurants::buildHabit();
    EXPECT_EQ(habit.getLocation(), "900 University Ave, Riverside, CA 92521");
}

//Also tests constructor and getMenu(), used in buildHabit() and buildPandaExpress() methods
TEST(CampusRestaurantTest, testBuildHabit) {
    CampusRestaurant habit = BuildCampusRestaurants::buildHabit();
    EXPECT_EQ(habit.getMenuList(), "Charburger\nDouble Char\nBBQ Bacon Char\nPortabella Char\nTeriyaki Char\nOriginal Impossible\nGrilled Chicken Sandwich\nSpicy Crispy Chicken Sandwich\nChicken Club\nChargrilled Ahi Tuna Sandwich\nVeggie Burger\nBBQ Chicken Salad\nGrilled Chicken Salad\nGrilled Chicken Caesar Salad\nSanta Barbara Cobb Salad\nCaesar Salad\nGarden Salad\n10 pc Crispy Chicken Bites\n5 pc Crispy Chicken Bites\nFrench Fries\nOnion Rings\nSweet Potato Fries\nTempura Green Beans\nSide Caesar Salad\nSide Salad\n");
}

TEST(CampusRestaurant, testBuildPandaExpress) {
    CampusRestaurant pandaExpress = BuildCampusRestaurants::buildPandaExpress();
    EXPECT_EQ(pandaExpress.getMenuList(), "Chow Mein\nFried Rice\nWhite Steamed Rice\nSuper Greens\nChow Fun\nBlack Pepper Chicken\nKung Pao Chicken\nGrilled Teriyaki Chicken\nMushroom Chicken\nOrange Chicken\nBeijing Beef\nBlack Pepper Angus Steak\nBroccoli Beef\nHoney Walnut Shrimp\n");
}

TEST(CampusRestaurantTest, testBuildBarn) {
    CampusRestaurant barn = BuildCampusRestaurants::buildBarn();
    EXPECT_EQ(barn.getMenuList(), "The Barn Classic Burger\nBBQ Lasso Burger\nOriginal Chicken Sandwich\nWestern Chicken Stack\nThe Vegan Burger\nVFC Vegan Chicken Bites\nVFC Vegan Fried Chicken Sandwich\nBarn Fries\nOnion Rings\n");
}