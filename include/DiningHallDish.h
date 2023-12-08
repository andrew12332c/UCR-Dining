#ifndef DINING_HALL_DISH_H
#define DINING_HALL_DISH_H

#include "../include/Dish.h"
#include "../include/Ingredient.h"

class DiningHallDish : public Dish{
  public:
    DiningHallDish(string n, vector<Ingredient> ingredients, int amt);
    void addIngredient(Ingredient newIngredient);
    void setServingAmount(int servingAmt);
    void setCalories();
    void setProtein();
    int getServingAmount();
    
  private:
    vector<Ingredient> ingredientList;
    int servingAmountInGrams;
};

#endif