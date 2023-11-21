#include "RestaurantDish.h"

RestaurantDish::RestaurantDish(string n, int c, int pro, int pri) {
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

int RestaurantDish::getPrice() {
    return price;
}