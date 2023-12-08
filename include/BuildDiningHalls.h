#ifndef BUILD_DINING_HALLS_H
#define BUILD_DINING_HALLS_H

#include "../include/DiningHall.h"

class BuildDiningHalls : public DiningHall {
  public:
    static DiningHall buildLothian();
    static DiningHall buildGlasgow();
};

#endif