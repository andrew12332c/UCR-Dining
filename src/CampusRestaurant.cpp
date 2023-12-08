#include "../include/CampusRestaurant.h"

CampusRestaurant::CampusRestaurant(string name, string location, vector<RestaurantDish> restaurantMenu) {
    setName(name);
    setLocation(location);
    setMenu(restaurantMenu);
}

void CampusRestaurant::addMenuItem(RestaurantDish dish) {
    menu.push_back(dish);
}

void CampusRestaurant::setMenu(const vector<RestaurantDish>& newMenu) {
    menu = newMenu;
}

void CampusRestaurant::removeMenuItem(const string& dish) {
    for (unsigned i = 0; i < menu.size(); ++i) {
        if (menu.at(i).getName() == dish) {
            menu.erase(menu.begin() + i);
        }
    }
}

vector<RestaurantDish>& CampusRestaurant::getMenu() {
    return menu;
}

string CampusRestaurant::getMenuList() {
    string menuList = "";
    for(int i = 0; i < menu.size(); ++i){
        menuList = menuList + menu.at(i).getName() + "\n";
    }
    return menuList;
}