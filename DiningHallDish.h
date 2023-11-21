#include "Dish.h"
#include "Ingredient.h"

class DiningHallDish : public Dish{
  public:
    DiningHallDish(string n, vector<Ingredient*> ingredients, int amt);
    void addIngredient(Ingredient* newIngredient);
    void setServingAmount(int servingAmt);
    void setCalories();
    void setProtein();
    
  private:
    vector<Ingredient*> ingredientList;
    int servingAmount;
};


