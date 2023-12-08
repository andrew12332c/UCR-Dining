#ifndef RESTAURANT_H
#define RESTAURANT_H

//uncomment when files are ready
//include "../DiningHall.cpp"
//include "../CampusRestaurant.cpp"
#include "RestaurantHours.h"

using namespace std;

class Restaurant{
  public: 
    Restaurant();
    Restaurant(string loc, string restName);
    void setLocation(string loc);
    void setName(string restName);

    string getLocation();
    string getName();

    //void sortByCalories(){}
    //void sortByProtein(){}

  protected:
    string name;
    string location;
};

#endif