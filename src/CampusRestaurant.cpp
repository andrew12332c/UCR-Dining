#include "../include/CampusRestaurant.h"

CampusRestaurant::CampusRestaurant(string name, string location, vector<RestaurantDish> restaurantMenu) {
    setName(name);
    setLocation(location);

    for (unsigned i = 0; i < restaurantMenu.size(); ++i) {
        addMenuItem(restaurantMenu.at(i));
    }
}

void CampusRestaurant::addMenuItem(RestaurantDish dish) {
    menu.push_back(dish);
}

void CampusRestaurant::removeMenuItem(const string& dish) {
    for (unsigned i = 0; i < menu.size(); ++i) {
        if (menu.at(i).getName() == dish) {
            menu.erase(menu.begin() + i);
        }
    }
}

string CampusRestaurant::getMenu() {
    string menuList = "";
    for(int i = 0; i < menu.size(); ++i){
        menuList = menuList + menu.at(i).getName() + "\n";
    }
    return menuList;
}