#ifndef RESTAURANT_DISH_H
#define RESTAURANT_DISH_H

#include "../include/Dish.h"

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