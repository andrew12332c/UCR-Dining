#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>
using namespace std;

class Ingredient {
  public:
    Ingredient(string n, int c, int p);

    //Setters
    void setName(string n);
    void setCalories(int c);
    void setProtein(int p);

    //Getters
    string getName();
    int getCalories();
    int getProtein();

  private:
    string name;
    int calories;
    int protein;
};

#endif