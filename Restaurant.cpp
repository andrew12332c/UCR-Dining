#include "Restaurant.h"
#include <string>

using namespace std;

Restaurant::Restaurant(){
    location = "none";
    name = "noname";
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