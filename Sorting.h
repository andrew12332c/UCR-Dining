#ifndef SORTING_H
#define SORTING

#include "Dish.h"
#include <vector>
#include <string>

using namespace std;

class Sorting {
    public: 
        void proteinSortingHiLo(vector<Dish*>& vect);
        void proteinSortingLoHi(vector<Dish*>& vect);
        void calorieSortingHiLo(vector<Dish*>& vect);
        void calorieSortingLoHi(vector<Dish*>& vect);
        void priceSortingLoHi(vector<Dish*>& vect);
        void priceSortingHiLo(vector<Dish*>& vect);
    private:
        void lowToHigh(vector<Dish*>& vect);
        void highToLow(vector<Dish*>& vect);
};

#endif