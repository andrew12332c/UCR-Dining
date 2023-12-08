#ifndef DINING_HALL_H
#define DINING_HALL_H

#include "../include/Restaurant.h"
#include "../include/DiningHallDish.h"

class DiningHall : public Restaurant{
  public:
    DiningHall();
    DiningHall(string name, string location, const vector<DiningHallDish>& menu);
    void addMenuItem(DiningHallDish dish);
    void removeMenuItem(DiningHallDish dish);
    void setMenu(const vector<DiningHallDish>& newMenu);
    string getMenuList();
    vector<DiningHallDish> getMenu();
    
  protected:
    vector<DiningHallDish> menu;
};

#endif