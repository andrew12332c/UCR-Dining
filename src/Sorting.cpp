#include "../include/Sorting.h"

// RestaurantDish sorting functions
vector<RestaurantDish> Sorting::sortProteinHiLoRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getProtein() < (sortedMenu.at(j)).getProtein()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortProteinLoHiRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getProtein() > (sortedMenu.at(j)).getProtein()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortCaloriesHiLoRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getCalories() < (sortedMenu.at(j)).getCalories()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortCaloriesLoHiRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getCalories() > (sortedMenu.at(j)).getCalories()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortPriceHiLoRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getPrice() < (sortedMenu.at(j)).getPrice()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortPriceLoHiRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getPrice() > (sortedMenu.at(j)).getPrice()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortAToZRestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getName() > (sortedMenu.at(j)).getName()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<RestaurantDish> Sorting::sortZToARestaurantDish(vector<RestaurantDish>& dishes) {
    vector<RestaurantDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getName() < (sortedMenu.at(j)).getName()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

// DiningHallDish sorting functions
vector<DiningHallDish> Sorting::sortProteinHiLoDiningHallDish(vector<DiningHallDish>& dishes) {
    vector<DiningHallDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getProtein() < (sortedMenu.at(j)).getProtein()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<DiningHallDish> Sorting::sortProteinLoHiDiningHallDish(vector<DiningHallDish>& dishes) {
    vector<DiningHallDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getProtein() > (sortedMenu.at(j)).getProtein()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<DiningHallDish> Sorting::sortCaloriesHiLoDiningHallDish(vector<DiningHallDish>& dishes) {
    vector<DiningHallDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getCalories() < (sortedMenu.at(j)).getCalories()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<DiningHallDish> Sorting::sortCaloriesLoHiDiningHallDish(vector<DiningHallDish>& dishes) {
    vector<DiningHallDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getCalories() > (sortedMenu.at(j)).getCalories()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<DiningHallDish> Sorting::sortAToZDiningHallDish(vector<DiningHallDish>& dishes) {
    vector<DiningHallDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getName() > (sortedMenu.at(j)).getName()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}

vector<DiningHallDish> Sorting::sortZToADiningHallDish(vector<DiningHallDish>& dishes) {
    vector<DiningHallDish> sortedMenu = dishes;

    for (unsigned int i = 0; i < sortedMenu.size(); ++i) {
        for (unsigned int j = i + 1; j < sortedMenu.size(); ++j) {
            if ((sortedMenu.at(i)).getName() < (sortedMenu.at(j)).getName()) {
                swap(sortedMenu.at(i), sortedMenu.at(j));
            }
        }
    }

    return sortedMenu;
}
