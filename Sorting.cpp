#include "Sorting.h"

template <typename T> void Sorting<T>::proteinSortingHiLo(vector<T*>& dishes) {
    highToLow(dishes);
}

template <typename T> void Sorting<T>::calorieSortingHiLo(vector<T*>& dishes) {
    highToLow(dishes);
}

template <typename T> void Sorting<T>::priceSortingHiLo(vector<T*>& dishes) {
    highToLow(dishes);
}

template <typename T> void Sorting<T>::proteinSortingLoHi(vector<T*>& dishes) {
    lowToHigh(dishes);
}

template <typename T> void Sorting<T>::calorieSortingLoHi(vector<T*>& dishes) {
    lowToHigh(dishes);
}

template <typename T> void Sorting<T>::priceSortingLoHi(vector<T*>& dishes) {
    lowToHigh(dishes);
}

// private helper functions
template <typename T> void Sorting<T>::lowToHigh(vector<T*>& dishes) {
    for (int i = 0; i < this->dishes.size(); ++i) {
        for (int j = i + 1; j < dishes.size(); ++j) {
            if (this->dishes.at(i) < this->dishes.at(j)) {
                swap(this->dishes.at(i), this->dishes.at(j));
            }
        }
    }
}

template <typename T> void Sorting<T>::highToLow(vector<T*>& dishes) {
    for (int i = 0; i < this->dishes.size(); ++i) {
        for (int j = i + 1; j < this->dishes.size(); ++j) {
            if (this->dishes.at(i) > this->dishes.at(j)) {
                swap(this->dishes.at(i), this->dishes.at(j));
            }
        }
    }
}