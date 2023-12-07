#include "gtest/gtest.h"
#include "../include/Sorting.cpp"

using namespace std;

CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();

// RestaurantDish Sorting Tests; Need to implement isSorted() function
TEST(SortingTestsRestaurantDish, testProteinSortingHiLo) {
    Sorting sort = Sorting::proteinSortingHiLoRestaurantDish(habitMenu);
    sort.isSorted(habitMenu);
    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testProteinSortingLoHi) {
    Sorting sort = Sorting::proteinSortingLoHiRestaurantDish(habitMenu);
    sort.isSorted(habitMenu);
    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testCalorieSortingHiLo) {
    Sorting sort = Sorting::calorieSortingHiLoRestaurantDish(habitMenu);
    sort.isSorted(habitMenu);
    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testCalorieSortingLoHi) {
    Sorting sort = Sorting::calorieSortingLoHiRestaurantDish(habitMenu);
    sort.isSorted(habitMenu);
    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testPriceSortingHiLo) {
    Sorting sort = Sorting::priceSortingHiLoRestaurantDish(habitMenu);
    sort.isSorted(habitMenu);
    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testPriceSortingLoHi) {
    Sorting sort = Sorting::priceSortingLoHiRestaurantDish(habitMenu);
    sort.isSorted(habitMenu);
    EXPECT_TRUE(isSorted);
}

// DiningHallDish Sorting Tests
// TEST(SortingTestsDiningHallDish, testProteinSortingHiLo) {
//     Sorting sort = Sorting::proteinSortingHiLoDiningHallDish(habitMenu);
//     sort.isSorted(habitMenu);
//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testProteinSortingLoHi) {
//     Sorting sort = Sorting::proteinSortingLoHiDiningHallDish(habitMenu);
//     sort.isSorted(habitMenu);
//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testCalorieSortingHiLo) {
//     Sorting sort = Sorting::proteinSortingHiLoDiningHallDish(habitMenu);
//     sort.isSorted(habitMenu);
//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testCalorieSortingLoHi) {
//     Sorting sort = Sorting::proteinSortingLoHiDiningHallDish(habitMenu);
//     sort.isSorted(habitMenu);
//     EXPECT_TRUE(isSorted);
// }