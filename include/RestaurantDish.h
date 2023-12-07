#ifndef RESTAURANT_DISH_H
#define RESTAURANT_DISH_H

#include "../include/Dish.h"

class RestaurantDish : public Dish {
  public:
    RestaurantDish(string n, int c, int pro, float pri);

    //Setters
    void setCalories();
    void setProtein();

    //Getters
    float getPrice();

  private:
    float price;
};

#endif