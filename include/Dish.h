#ifndef DISH_H
#define DISH_H

#include <vector>
#include <string>

using namespace std;

class Dish {
  public: 
    //Setters
    void setName(string s);
    virtual void setCalories() = 0;
    virtual void setProtein() = 0;
    void addAllergy(string a);

    //Getters
    string getName();
    int getCalories();
    int getProtein();
    vector<string> getAllergies();

  protected:
    string name;
    int calories;
    int protein;
    vector<string> allergies;
};

#endif