#include "gtest/gtest.h"
#include "../include/BuildCampusRestaurants.h"
#include "../include/BuildDiningHalls.h"
#include "../include/Sorting.h"

using namespace std;

// RestaurantDish Sorting Tests
TEST(SortingTestsRestaurantDish, testSortProteinHiLo) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortProteinHiLoRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getProtein() < (Habit.getMenu().at(i + 1)).getProtein()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortProteinLoHi) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortProteinLoHiRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getProtein() > (Habit.getMenu().at(i + 1)).getProtein()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortCaloriesHiLo) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortCaloriesHiLoRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getCalories() < (Habit.getMenu().at(i + 1)).getCalories()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortCaloriesLoHi) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortCaloriesLoHiRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getCalories() > (Habit.getMenu().at(i + 1)).getCalories()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortPriceHiLo) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortPriceHiLoRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getPrice() < (Habit.getMenu().at(i + 1)).getPrice()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortPriceLoHi) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortPriceLoHiRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getPrice() > (Habit.getMenu().at(i + 1)).getPrice()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortAToZ) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortAToZRestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getName() > (Habit.getMenu().at(i + 1)).getName()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortZToA) {
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    bool isSorted = true;
    Habit.setMenu(Sorting::sortZToARestaurantDish(Habit.getMenu()));

    for (unsigned int i = 0; i < Habit.getMenu().size() - 1; ++i) {
        if ((Habit.getMenu().at(i)).getName() < (Habit.getMenu().at(i + 1)).getName()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

//DiningHallDish Sorting Tests
TEST(SortingTestsDiningHallDish, testSortProteinHiLo) {
    DiningHall Glasgow = BuildDiningHalls::buildGlasgow();
    bool isSorted = true;
    Glasgow.setMenu(Sorting::sortProteinHiLoDiningHallDish(Glasgow.getMenu()));

    for (unsigned int i = 0; i < Glasgow.getMenu().size() - 1; ++i) {
        if ((Glasgow.getMenu().at(i)).getProtein() < (Glasgow.getMenu().at(i + 1)).getProtein()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsDiningHallDish, testSortProteinLoHi) {
    DiningHall Glasgow = BuildDiningHalls::buildGlasgow();
    bool isSorted = true;
    Glasgow.setMenu(Sorting::sortProteinLoHiDiningHallDish(Glasgow.getMenu()));

    for (unsigned int i = 0; i < Glasgow.getMenu().size() - 1; ++i) {
        if ((Glasgow.getMenu().at(i)).getProtein() > (Glasgow.getMenu().at(i + 1)).getProtein()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsDiningHallDish, testSortCaloriesHiLo) {
    DiningHall Glasgow = BuildDiningHalls::buildGlasgow();
    bool isSorted = true;
    Glasgow.setMenu(Sorting::sortCaloriesHiLoDiningHallDish(Glasgow.getMenu()));

    for (unsigned int i = 0; i < Glasgow.getMenu().size() - 1; ++i) {
        if ((Glasgow.getMenu().at(i)).getCalories() < (Glasgow.getMenu().at(i + 1)).getCalories()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsDiningHallDish, testSortCaloriesLoHi) {
    DiningHall Glasgow = BuildDiningHalls::buildGlasgow();
    bool isSorted = true;
    Glasgow.setMenu(Sorting::sortCaloriesLoHiDiningHallDish(Glasgow.getMenu()));

    for (unsigned int i = 0; i < Glasgow.getMenu().size() - 1; ++i) {
        if ((Glasgow.getMenu().at(i)).getCalories() > (Glasgow.getMenu().at(i + 1)).getCalories()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsDiningHallDish, testSortAToZ) {
    DiningHall Glasgow = BuildDiningHalls::buildGlasgow();
    bool isSorted = true;
    Glasgow.setMenu(Sorting::sortAToZDiningHallDish(Glasgow.getMenu()));

    for (unsigned int i = 0; i < Glasgow.getMenu().size() - 1; ++i) {
        if ((Glasgow.getMenu().at(i)).getName() > (Glasgow.getMenu().at(i + 1)).getName()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsDiningHallDish, testSortZToA) {
    DiningHall Glasgow = BuildDiningHalls::buildGlasgow();
    bool isSorted = true;
    Glasgow.setMenu(Sorting::sortZToADiningHallDish(Glasgow.getMenu()));

    for (unsigned int i = 0; i < Glasgow.getMenu().size() - 1; ++i) {
        if ((Glasgow.getMenu().at(i)).getName() < (Glasgow.getMenu().at(i + 1)).getName()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}