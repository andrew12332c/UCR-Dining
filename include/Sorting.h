#ifndef SORTING_H
#define SORTING

#include <vector>

using namespace std;

template <typename T> class Sorting {
    public: 
        void proteinSortingHiLo(vector<T*>& vect);
        void proteinSortingLoHi(vector<T*>& vect);
        void calorieSortingHiLo(vector<T*>& vect);
        void calorieSortingLoHi(vector<T*>& vect);
        void priceSortingLoHi(vector<T*>& vect);
        void priceSortingHiLo(vector<T*>& vect);
    private:
        void lowToHigh(vector<T*>& vect);
        void highToLow(vector<T*>& vect);
};

#endif