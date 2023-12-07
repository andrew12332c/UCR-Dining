#ifndef SORTING_H
#define SORTING

#include "RestaurantDish.h"
#include "DiningHallDish.h"

#include <vector>

using namespace std;

class Sorting {
    public: 
        // RestaurantDish sorting functions
        void sortProteinHiLoRestaurantDish(vector<RestaurantDish>& dishes);
        void sortProteinLoHiRestaurantDish(vector<RestaurantDish>& dishes);
        void sortCaloriesHiLoRestaurantDish(vector<RestaurantDish>& dishes);
        void sortCaloriesLoHiRestaurantDish(vector<RestaurantDish>& dishes);
        void sortPriceHiLoRestaurantDish(vector<RestaurantDish>& dishes);
        void sortPriceLoHiRestaurantDish(vector<RestaurantDish>& dishes);
        void sortAToZRestaurantDish(vector<RestaurantDish>& dishes);
        void sortZToARestaurantDish(vector<RestaurantDish>& dishes);

        // DiningHallDish sorting functions
        void sortProteinHiLoDiningHallDish(vector<DiningHallDish>& dishes);
        void sortProteinLoHiDiningHallDish(vector<DiningHallDish>& dishes);
        void sortCaloriesHiLoDiningHallDish(vector<DiningHallDish>& dishes);
        void sortCaloriesLoHiDiningHallDish(vector<DiningHallDish>& dishes);
        // void sortPriceHiLoDiningHallDish(vector<DiningHallDish>& dishes);
        // void sortPriceLoHiDiningHallDish(vector<DiningHallDish>& dishes);
        void sortAToZDiningHallDish(vector<DiningHallDish>& dishes);
        void sortZToADiningHallDish(vector<DiningHallDish>& dishes);
};

#endif