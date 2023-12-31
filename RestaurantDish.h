#ifndef RESTAURANTDISH_H
#define RESTAURANTDISH_H

#include "Dish.h"

using namespace std;

class RestaurantDish : public Dish {
  public:
    RestaurantDish(string n, int c, int pro, int pri);

    //Setters
    void setCalories();
    void setProtein();

    //Getters
    int getPrice();

  private:
    int price;
};

#endif