#ifndef RESTAURANT_H
#define RESTAURANT

#include <string>
//uncomment when files are ready
//include "../DiningHall.cpp"
//include "../CampusRestaurant.cpp"

using namespace std;

class Restaurant {
  public: 
    Restaurant();
    void setLocation(string loc);
    void setName(string restName);
    void setHours(string hours);
    void setPeakHours(string pHour);

    string getLocation();
    string getName();
    string getHours();
    string getPeakHours();

    //void sortByCalories(){}
    //void sortByProtein(){}

  protected:
    string openHours;
    string peakHours;
    string name;
    string location;
};

#endif