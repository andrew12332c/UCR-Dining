#ifndef DINING_HALL_H
#define DININNG_HALL_H

#include "../include/DiningHallDish.h"
#include "../include/Sorting.h"

class DiningHall{
  public:
    DiningHall();
    void addMenuItem(DiningHallDish dish);
    void removeMenuItem(DiningHallDish dish);
    string getMenu();
    void buildLothian();
    void buildGlasgow();
    
  protected:
    vector<DiningHallDish> menu;
};

#endif