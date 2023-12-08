#include "Sorting.h"

// RestaurantDish sorting functions
void Sorting::sortProteinHiLoRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getProtein() < (dishes.at(j)).getProtein()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortProteinLoHiRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getProtein() > (dishes.at(j)).getProtein()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortCaloriesHiLoRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getCalories() < (dishes.at(j)).getCalories()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortCaloriesLoHiRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getCalories() > (dishes.at(j)).getCalories()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortPriceHiLoRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getPrice() < (dishes.at(j)).getPrice()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortPriceLoHiRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getPrice() > (dishes.at(j)).getPrice()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortAToZRestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getName() > (dishes.at(j)).getName()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortZToARestaurantDish(vector<RestaurantDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getName() < (dishes.at(j)).getName()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

// DiningHallDish sorting functions
void Sorting::sortProteinHiLoDiningHallDish(vector<DiningHallDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getProtein() < (dishes.at(j)).getProtein()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortProteinLoHiDiningHallDish(vector<DiningHallDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getProtein() > (dishes.at(j)).getProtein()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortCaloriesHiLoDiningHallDish(vector<DiningHallDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getCalories() < (dishes.at(j)).getCalories()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortCaloriesLoHiDiningHallDish(vector<DiningHallDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getCalories() > (dishes.at(j)).getCalories()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortAToZDiningHallDish(vector<DiningHallDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getName() > (dishes.at(j)).getName()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::sortZToADiningHallDish(vector<DiningHallDish>& dishes) {
    for (unsigned int i = 0; i < dishes.size(); ++i) {
        for (unsigned int j = i + 1; j < dishes.size(); ++j) {
            if ((dishes.at(i)).getName() < (dishes.at(j)).getName()) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}
