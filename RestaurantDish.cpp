#include "RestaurantDish.h"

RestaurantDish::RestaurantDish(string n, int c, int pro, int pri) {
    setName(n);
    calories = c;
    protein = pro;
    price = pri;
}

void RestaurantDish::setCalories(int c) {calories = c;}
void RestaurantDish::setProtein(int p) {protein = p;}

int RestaurantDish::getPrice() {return price;}