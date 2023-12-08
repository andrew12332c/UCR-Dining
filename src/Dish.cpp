#include "../include/Dish.h"

//Setters
void Dish::setName(string s) {name = s;}
void Dish::addAllergy(string a) {allergies.push_back(a);}

//Getters
string Dish::getName() {return name;}
int Dish::getCalories() {return calories;}
int Dish::getProtein() {return protein;}
vector<string> Dish::getAllergies() {return allergies;}