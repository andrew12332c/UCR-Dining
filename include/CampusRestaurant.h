#ifndef CAMPUSRESTAURANT_H
#define CAMPUSRESTAURANT_H

#include <vector>
#include "../include/Restaurant.h"
#include "../include/RestaurantDish.h"

using namespace std;

class CampusRestaurant : public Restaurant {
  public:
    CampusRestaurant(string name, string location, vector<RestaurantDish> menu);
    void addMenuItem(RestaurantDish dish);
    void removeMenuItem(const string& dish);
    string getMenu();

  private:
    vector<RestaurantDish> menu;
};




#endif