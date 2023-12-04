#include "../include/DiningHallDish.h"

DiningHallDish::DiningHallDish(string n, vector<Ingredient*> ingredients, int amt) {
    name = n;
    ingredientList = ingredients;
    servingAmountInGrams = amt;
    calories = 0;
    protein = 0;
    setCalories();
    setProtein();
}

void DiningHallDish::addIngredient(Ingredient* newIngredient) {
    ingredientList.push_back(newIngredient);
}

void DiningHallDish::setServingAmount(int servingAmt) {
    servingAmountInGrams = servingAmt;
}

void DiningHallDish::setCalories() {
    for (unsigned i = 0; i < ingredientList.size(); ++i) {
        calories += ingredientList.at(i)->getCalories();
    }
}

void DiningHallDish::setProtein() {
    for (unsigned i = 0; i < ingredientList.size(); ++i) {
        protein += ingredientList.at(i)->getProtein();
    }
}

int DiningHallDish::getServingAmount() {
    return servingAmountInGrams;
}