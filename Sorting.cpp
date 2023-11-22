#include "Sorting.h"

void Sorting::proteinSortingHiLo(vector<Dish*>& dishes) {
    highToLow(dishes);
}

void Sorting::calorieSortingHiLo(vector<Dish*>& dishes) {
    highToLow(dishes);
}

void Sorting::priceSortingHiLo(vector<Dish*>& dishes) {
    highToLow(dishes);
}

void Sorting::proteinSortingLoHi(vector<Dish*>& dishes) {
    lowToHigh(dishes);
}

void Sorting::calorieSortingLoHi(vector<Dish*>& dishes) {
    lowToHigh(dishes);
}

void Sorting::priceSortingLoHi(vector<Dish*>& dishes) {
    lowToHigh(dishes);
}

// private helper functions
void Sorting::lowToHigh(vector<Dish*>& dishes) {
    for (int i = 0; i < dishes.size(); ++i) {
        for (int j = i + 1; j < dishes.size(); ++j) {
            if (dishes.at(i) < dishes.at(j)) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}

void Sorting::highToLow(vector<Dish*>& dishes) {
    for (int i = 0; i < dishes.size(); ++i) {
        for (int j = i + 1; j < dishes.size(); ++j) {
            if (dishes.at(i) > dishes.at(j)) {
                swap(dishes.at(i), dishes.at(j));
            }
        }
    }
}