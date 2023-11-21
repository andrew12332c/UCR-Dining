#ifndef DISH_H
#define DISH

#include <vector>
#include <string>

using namespace std;

class Dish {
  public: 
    //Setters
    void setName(string s) {name = s;}
    virtual void setCalories() = 0;
    virtual void setProtein() = 0;
    void addAllergy(string a) {allergies.push_back(a);}

    //Getters
    string getName() {return name;}
    int getCalories() {return calories;}
    int getProtein() {return protein;}
    vector<string> getAllergies() {return allergies;}

  protected:
    string name;
    int calories;
    int protein;
    vector<string> allergies;
};

#endif