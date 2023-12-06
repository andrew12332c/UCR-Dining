#include "Dish.h"
#include "Ingredient.h"

class DiningHallDish : public Dish{
  public:
    DiningHallDish(string n, vector<Ingredient*> ingredients, int amt);
    void addIngredient(Ingredient* newIngredient);
    void setServingAmount(int servingAmt);
    void setCalories() override;
    void setProtein() override;
    int getServingAmount();
    
  private:
    vector<Ingredient*> ingredientList;
    int servingAmountInGrams;
};


