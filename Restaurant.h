#ifndef RESTAURANT_H
#define RESTAURANT

//uncomment when files are ready
//include "../DiningHall.cpp"
//include "../CampusRestaurant.cpp"
//#include "RestaurantHours.h"

using namespace std;

class Restaurant{
  public: 
    Restaurant();
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