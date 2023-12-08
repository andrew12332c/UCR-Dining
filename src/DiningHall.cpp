#include "../include/DiningHall.h"

DiningHall::DiningHall() {
    setName("");
    setLocation("");
    menu = {};
}

DiningHall::DiningHall(string name, string location, const vector<DiningHallDish>& diningHallMenu){
    setName(name);
    setLocation(location);
    setMenu(diningHallMenu);
}

void DiningHall::addMenuItem(DiningHallDish dish){
    menu.push_back(dish);
}

void DiningHall::removeMenuItem(DiningHallDish dish){
    for(int i = 0; i < menu.size(); ++i){
        if(menu.at(i).getName() == dish.getName()){
            menu.erase(menu.begin() + i);
        }
    }
}

void DiningHall::setMenu(const vector<DiningHallDish>& newMenu) {
    menu = newMenu;
}

string DiningHall::getMenuList(){
    string menuList = "";
    for(int i = 0; i < menu.size(); ++i){
        menuList = menuList + menu.at(i).getName() + "\n";
    }
    return menuList;
}

vector<DiningHallDish> DiningHall::getMenu() {
    return menu;
}