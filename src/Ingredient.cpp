#include "../include/Ingredient.h"
#include <string>

Ingredient::Ingredient(string n, int c, int p) {
    name = n;
    calories = c;
    protein = p;
}

//Setters
void Ingredient::setName(string n) {name = n;}
void Ingredient::setCalories(int c) {calories = c;}
void Ingredient::setProtein(int p) {protein = p;}

//Getters
string Ingredient::getName() {return name;}
int Ingredient::getCalories() {return calories;}
int Ingredient::getProtein() {return protein;}