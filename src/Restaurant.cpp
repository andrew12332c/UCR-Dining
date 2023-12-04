#include "../include/Restaurant.h"
#include <string>

using namespace std;

Restaurant::Restaurant(){
    location = "none";
    name = "noname";
}

Restaurant::Restaurant(string loc, string restName){
    location = loc;
    name = restName;
}

void Restaurant::setLocation(string loc){
    location = loc;
}

void Restaurant::setName(string restName){
    name = restName;
}  

string Restaurant::getLocation(){
    return location;
}
    
string Restaurant::getName(){
    return name;
}