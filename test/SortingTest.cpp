#include "gtest/gtest.h"
#include "../include/Sorting.cpp"

using namespace std;

CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();

// RestaurantDish Sorting Tests
TEST(SortingTestsRestaurantDish, testSortProteinHiLo) {
    bool isSorted = true;
    Sorting sort = Sorting::sortProteinHiLoRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getProtein() < (sort.habitMenu.at(i + 1)).getProtein()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortProteinLoHi) {
    bool isSorted = true;
    Sorting sort = Sorting::sortProteinLoHiRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getProtein() > (sort.habitMenu.at(i + 1)).getProtein()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortCaloriesHiLo) {
    bool isSorted = true;
    Sorting sort = Sorting::sortCaloriesHiLoRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getCalories() < (sort.habitMenu.at(i + 1)).getCalories()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortCaloriesLoHi) {
    bool isSorted = true;
    Sorting sort = Sorting::sortCaloriesLoHiRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getCalories() > (sort.habitMenu.at(i + 1)).getCalories()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortPriceHiLo) {
    bool isSorted = true;
    Sorting sort = Sorting::sortPriceHiLoRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getPrice() < (sort.habitMenu.at(i + 1)).getPrice()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortPriceLoHi) {
    bool isSorted = true;
    Sorting sort = Sorting::sortPriceLoHiRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getPrice() > (sort.habitMenu.at(i + 1)).getPrice()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortAToZ) {
    bool isSorted = true;
    Sorting sort = Sorting::sortAToZRestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getName() > (sort.habitMenu.at(i + 1)).getName()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

TEST(SortingTestsRestaurantDish, testSortZToA) {
    bool isSorted = true;
    Sorting sort = Sorting::sortZToARestaurantDish(habitMenu);

    for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
        if ((sort.habitMenu.at(i)).getName() < (sort.habitMenu.at(i + 1)).getName()) {
            isSorted = false;
        }
    }

    EXPECT_TRUE(isSorted);
}

// DiningHallDish Sorting Tests
// TEST(SortingTestsDiningHallDish, testSortProteinHiLo) {
//     bool isSorted = true;
//     Sorting sort = Sorting::sortProteinHiLoDiningHallDish(habitMenu);

//     for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
//         if ((sort.habitMenu.at(i)).getProtein() < (sort.habitMenu.at(i + 1)).getProtein()) {
//             isSorted = false;
//         }
//     }

//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testSortProteinLoHi) {
//     bool isSorted = true;
//     Sorting sort = Sorting::sortProteinLoHiDiningHallDish(habitMenu);

//     for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
//         if ((sort.habitMenu.at(i)).getProtein() > (sort.habitMenu.at(i + 1)).getProtein()) {
//             isSorted = false;
//         }
//     }

//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testSortCaloriesHiLo) {
//     bool isSorted = true;
//     Sorting sort = Sorting::sortCaloriesHiLoDiningHallDish(habitMenu);

//     for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
//         if ((sort.habitMenu.at(i)).getCalories() < (sort.habitMenu.at(i + 1)).getCalories()) {
//             isSorted = false;
//         }
//     }

//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testSortCaloriesLoHi) {
//     bool isSorted = true;
//     Sorting sort = Sorting::sortCaloriesLoHiDiningHallDish(habitMenu);

//     for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
//         if ((sort.habitMenu.at(i)).getProtein() > (sort.habitMenu.at(i + 1)).getProtein()) {
//             isSorted = false;
//         }
//     }

//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testSortAToZ) {
//     bool isSorted = true;
//     Sorting sort = Sorting::sortAToZDiningHallDish(habitMenu);

//     for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
//         if ((sort.habitMenu.at(i)).getName() > (sort.habitMenu.at(i + 1)).getName()) {
//             isSorted = false;
//         }
//     }

//     EXPECT_TRUE(isSorted);
// }

// TEST(SortingTestsDiningHallDish, testSortZToA) {
//     bool isSorted = true;
//     Sorting sort = Sorting::sortZToADiningHallDish(habitMenu);

//     for (unsigned int = i; i < sort.habitMenu.size(i) - 1; ++i) {
//         if ((sort.habitMenu.at(i)).getName() < (sort.habitMenu.at(i + 1)).getName()) {
//             isSorted = false;
//         }
//     }

//     EXPECT_TRUE(isSorted);
// }