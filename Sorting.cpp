#include "Sorting.h"

template <typename T> void Sorting<T>::sortProteinHiLo(vector<T*>& dishes) {
    highToLow(dishes);
}

template <typename T> void Sorting<T>::sortProteinLoHi(vector<T*>& dishes) {
    lowToHigh(dishes);
}

template <typename T> void Sorting<T>::sortCaloriesHiLo(vector<T*>& dishes) {
    highToLow(dishes);
}
template <typename T> void Sorting<T>::sortCaloriesLoHi(vector<T*>& dishes) {
    lowToHigh(dishes);
}

template <typename T> void Sorting<T>::sortPriceHiLo(vector<T*>& dishes) {
    highToLow(dishes);
}

template <typename T> void Sorting<T>::sortPriceLoHi(vector<T*>& dishes) {
    lowToHigh(dishes);
}

template <typename T> void Sorting<T>::sortAToZ(vector<T*>& dishes) {
    highToLow(dishes);
}

template <typename T> void Sorting<T>::sortZToA(vector<T*>& dishes) {
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