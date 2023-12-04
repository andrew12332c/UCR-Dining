#ifndef SORTING_H
#define SORTING

#include <vector>

using namespace std;

template <typename T> class Sorting {
    public: 
        void sortProteinHiLo(vector<T*>& dishes);
        void sortProteinLoHi(vector<T*>& dishes);
        void sortCaloriesHiLo(vector<T*>& dishes);
        void sortCaloriesLoHi(vector<T*>& dishes);
        void sortPriceHiLo(vector<T*>& dishes);
        void sortPriceLoHi(vector<T*>& dishes);
        void sortAToZ(vector<T*>& dishes);
        void sortZToA(vector<T*>& dishes);
        
    private:
        void lowToHigh(vector<T*>& dishes);
        void highToLow(vector<T*>& dishes);
};

#endif