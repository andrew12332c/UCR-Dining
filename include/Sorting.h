#ifndef SORTING_H
#define SORTING_H

#include "../include/RestaurantDish.h"
#include "../include/DiningHallDish.h"

#include <vector>

using namespace std;

class Sorting {
    public: 
        // RestaurantDish sorting functions
        static vector<RestaurantDish> sortProteinHiLoRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortProteinLoHiRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortCaloriesHiLoRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortCaloriesLoHiRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortPriceHiLoRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortPriceLoHiRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortAToZRestaurantDish(vector<RestaurantDish>& dishes);
        static vector<RestaurantDish> sortZToARestaurantDish(vector<RestaurantDish>& dishes);

        // DiningHallDish sorting functions
        static vector<DiningHallDish> sortProteinHiLoDiningHallDish(vector<DiningHallDish>& dishes);
        static vector<DiningHallDish> sortProteinLoHiDiningHallDish(vector<DiningHallDish>& dishes);
        static vector<DiningHallDish> sortCaloriesHiLoDiningHallDish(vector<DiningHallDish>& dishes);
        static vector<DiningHallDish> sortCaloriesLoHiDiningHallDish(vector<DiningHallDish>& dishes);
        static vector<DiningHallDish> sortAToZDiningHallDish(vector<DiningHallDish>& dishes);
        static vector<DiningHallDish> sortZToADiningHallDish(vector<DiningHallDish>& dishes);
};

#endif