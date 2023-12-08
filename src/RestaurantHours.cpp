#include <string>
#include "../include/RestaurantHours.h"

using namespace std;

RestaurantHours::RestaurantHours(){
    openHours = "not open";
    peakHours = "no peak";
    offHours = "no off hour";
}

void RestaurantHours::setOpenHours(string opHours){
    openHours = opHours;
}

void RestaurantHours::setPeakHours(string pHours){
    peakHours = pHours;
}

void RestaurantHours::setOffHours(string oHours){
    offHours = oHours;
}

string RestaurantHours::getOpenHours(){
    return openHours;
}

string RestaurantHours::getPeakHours(){
    return peakHours;
}

string RestaurantHours::getOffHours(){
    return offHours;
}