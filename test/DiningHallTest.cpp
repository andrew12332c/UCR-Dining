#include "gtest/gtest.h"
#include "../src/DiningHall.cpp"
#include "../src/DiningHallDish.cpp"
#include "../src/Dish.cpp"
#include "../src/Ingredient.cpp"

using namespace std;

TEST(DiningHallTests, testConstructor) {
    DiningHall glasgow;
    EXPECT_EQ(glasgow.getMenu(), "");
}

TEST(DiningHallTests, testBuildGlasgow) {
    DiningHall glasgow;
    glasgow.buildGlasgow();
    EXPECT_EQ(glasgow.getMenu(), "Buffalo Cauliflower Wrap\nHalal Grilled Chicken\nNew England Clam Chowder\nPepperjack Steak Quesadilla\nSteamed Carrots\nShoestring Fries\nEnglish Pub Style Fish\nClassic Pepperoni Pizza\nVegan Grilled Cheese\nRed Quinoa\nCilantro Lime Rice\nSalmon Charmoula\nChicken Tinga\nCorn Tortilla\nSteamed Broccoli\nAssorted Cookies\n");
}

TEST(DiningHallTests, testBuildLothian) {
    DiningHall lothian;
    lothian.buildLothian();
    EXPECT_EQ(lothian.getMenu(), "Halal Grilled Chicken\nJasmine Rice\nChicken Thai Jungle Curry\nCheese Pizza\nShoestring Fries\nSteamed Carrots\nSteamed Corn\nAdobo Tri Tip\nGrilled Chicken Club Sandwich\nChicken Noodle Soup\nCorn Bread\nTurkey Burger\nKalua Pork\nRaspberry Jello\nAssorted Cookies\n");
}


TEST(DiningHallTests, testAddingMenuItem) {
    DiningHall testDiningHall;
    vector<Ingredient> ingredients;
    Ingredient rice("Rice", 200, 5);
    Ingredient chicken("Chicken", 100, 50);
    ingredients.push_back(rice);
    ingredients.push_back(chicken);

    DiningHallDish chickenAndRice("Chicken and Rice", ingredients, 100);

    testDiningHall.addMenuItem(chickenAndRice);
    EXPECT_EQ(testDiningHall.getMenu(), "Chicken and Rice\n");

}

TEST(DiningHallTests, testRemovingMenuItem) {
    DiningHall testDiningHall;
    vector<Ingredient> ingredients;
    Ingredient beans("Beans", 200, 5);
    Ingredient tortilla("Tortilla", 100, 50);
    ingredients.push_back(beans);
    ingredients.push_back(tortilla);
    DiningHallDish basicTortilla("Very Basic Tortilla", ingredients, 100);
    testDiningHall.addMenuItem(basicTortilla);

    vector<Ingredient> ingredients2;
    Ingredient rice("Rice", 200, 5);
    Ingredient chicken("Chicken", 100, 50);
    ingredients2.push_back(rice);
    ingredients2.push_back(chicken);
    DiningHallDish chickenAndRice("Chicken and Rice", ingredients2, 100);
    testDiningHall.addMenuItem(chickenAndRice);

    testDiningHall.removeMenuItem(chickenAndRice);
    
    EXPECT_EQ(testDiningHall.getMenu(), "Very Basic Tortilla\n");
}

TEST(DiningHallTests, testGetMenu) {
    DiningHall testDiningHall;
    vector<Ingredient> ingredients;
    Ingredient beans("Beans", 200, 5);
    Ingredient tortilla("Tortilla", 100, 50);
    ingredients.push_back(beans);
    ingredients.push_back(tortilla);
    DiningHallDish basicTortilla("Very Basic Tortilla", ingredients, 100);
    testDiningHall.addMenuItem(basicTortilla);

    vector<Ingredient> ingredients2;
    Ingredient rice("Rice", 200, 5);
    Ingredient chicken("Chicken", 100, 50);
    ingredients2.push_back(rice);
    ingredients2.push_back(chicken);
    DiningHallDish chickenAndRice("Chicken and Rice", ingredients2, 100);
    testDiningHall.addMenuItem(chickenAndRice);
    
    EXPECT_EQ(testDiningHall.getMenu(), "Very Basic Tortilla\nChicken and Rice\n");
}
