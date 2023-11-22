#include "Restaurant.h"
#include <string>

using namespace std;

Restaurant::Restaurant(){
    location = "none";
    name = "noname";
    openHours = "closed";
    peakHours = "nohours";
}

void Restaurant::setLocation(string loc){
    location = loc;
}

void Restaurant::setName(string restName){
    name = restName;
}  

void Restaurant::setHours(string hours){
    openHours = hours;
}

void Restaurant::setPeakHours(string pHour){
    peakHours = pHour;
}

string Restaurant::getLocation(){
    return location;
}
    
string Restaurant::getName(){
    return name;
}

string Restaurant::getHours(){
    return openHours;
}

string Restaurant::getPeakHours(){
    return peakHours;
}