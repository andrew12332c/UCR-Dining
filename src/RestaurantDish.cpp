#include "../include/RestaurantDish.h"

RestaurantDish::RestaurantDish(string n, int c, int pro, float pri) {
    setName(n);
    calories = c;
    protein = pro;
    price = pri;
}

void RestaurantDish::setCalories() {
    return;
}

void RestaurantDish::setProtein() {
    return;
}

float RestaurantDish::getPrice() {
    return price;
}