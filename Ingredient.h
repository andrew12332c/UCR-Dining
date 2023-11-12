#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>
using namespace std;

class Ingredient {
  public:
    Ingredient(string n, int c, int p): name(n), calories(c), protein(p) {};

    //Setters
    void setName(string n) {name = n;}
    void setCalories(int c) {calories = c;}
    void setProtein(int p) {protein = p;}

    //Getters
    string getName() {return name;}
    int getCalories() {return calories;}
    int getProtein() {return protein;}

  private:
    string name;
    int calories;
    int protein;
};

#endif