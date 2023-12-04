#ifndef RESTAURANTHOURS_H
#define RESTAURANTHOURS

#include <string>

using namespace std;

class RestaurantHours{
 public:
  RestaurantHours();
  void setOpenHours(string opHours);
  void setPeakHours(string pHours);
  void setOffHours(string oHours);
  string getOpenHours();
  string getPeakHours();
  string getOffHours();

 protected: 
  string openHours;
  string peakHours;
  string offHours;
};

#endif