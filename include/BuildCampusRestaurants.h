#ifndef BUILD_CAMPUS_RESTAURANTS_H
#define BUILD_CAMPUS_RESTAURANTS_H

#include "../include/CampusRestaurant.h"

class BuildCampusRestaurants : public CampusRestaurant {
  public:
    static CampusRestaurant buildHabit();
    static CampusRestaurant buildPandaExpress();
    static CampusRestaurant buildBarn();
};

#endif