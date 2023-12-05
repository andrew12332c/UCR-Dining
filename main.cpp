
#include <iostream>
//#include "RestaurantDish.cpp"
#include "Restaurant.cpp"
//#include "Restaurant.h"
#include "RestaurantHours.cpp"
#include "DiningHallDish.cpp"
//#include "RestaurantDish.cpp"

#include <iostream> 
#include <vector>
#include <string>
#include <limits>
//g++ -o tester main.cpp
using namespace std;

void displayOptions( vector<Restaurant>& restaurants) {
    cout << "Available Options: " << endl;
    for (int i = 0; i < restaurants.size(); ++i) {
        cout << i + 1 << ". " << restaurants[i].getName() << " (" << restaurants[i].getLocation() << ")" << endl;
    }
    cout << "888. Back" << endl;
}
void displayMenu( DiningHallDish& dish) {
    cout << "Menu for " << dish.getName() << ":" << endl;
    cout << "Serving Amount: " << dish.getServingAmount() << " grams" << endl;
    cout << "Calories: " << dish.getCalories() << " kcal" << endl;
    cout << "Protein: " << dish.getProtein() << " grams" << endl;

    cout << "Ingredients:" << endl;
    //  vector<Ingredient*>& ingredients = dish;
    // // Display each ingredient using index-based loop
    // for (int i = 0; i < ingredients.size(); ++i) {
    //     cout << "- " << ingredients[i]->getName() << ": " << ingredients[i]->getCalories() << " calories" << endl;
    // }
}
int main(){
 
  int eatlocation;
  vector<Restaurant> campsrestaurants;
    Restaurant pandaexpress;
      pandaexpress.setName("Panda Express's");
      pandaexpress.setLocation("900 University Ave");  
  vector<Restaurant> dininghalls;
    Restaurant Glasglow;
      Glasglow.setName("Glasglow");
      Glasglow.setLocation("680 W Linden St");  
      dininghalls.push_back(Glasglow);
      vector<Restaurant>* ptrToVector = nullptr;
        vector<Restaurant>* chosenVector = nullptr;
        // Choose the vector based on user input
  while (true) {
  cout << "Select an option:" << endl;
  cout << "1. Restaurants" << endl;
  cout << "2. Dining Halls" << endl;
  cout << "888. Exit" << endl;
  cin>>eatlocation;
    if (eatlocation == 1) {
        displayOptions(campsrestaurants);
        chosenVector = &campsrestaurants;
    } else if (eatlocation == 2) {
        displayOptions(dininghalls);
        chosenVector = &dininghalls;
    } else if (eatlocation == 888) {
        cout << "Exiting program." << endl;
        break;
    } else {
        cout << "Invalid input. Please enter 1, 2, or 888." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
    int choice;
    while(true){
      cout << "Please pick your restaurant: " << endl;
      cin >> choice;

      if (choice == 888) {
          continue; // Go back to the main menu
      }
      else if (choice >= 1 && choice <= chosenVector->size()) {
        Restaurant selectedRestaurant = (*chosenVector)[choice - 1];
        cout << "You picked: " << selectedRestaurant.getName() << " (" << selectedRestaurant.getLocation() << ")" << endl;
        int hoursormenu=0;
        while(true){
          cout << "Select an option:" << endl;
          cout << "1. View Menu" << endl;
          cout << "2. View Hours" << endl;
          cin >> hoursormenu;
          if(hoursormenu== 1){
              cout << "discplay menu:";    
            vector<Ingredient*> ingredients;
            Ingredient* rice = new Ingredient("Rice", 200, 5);
            Ingredient* chicken = new Ingredient("Chicken", 100, 50);
            ingredients.push_back(rice);
            ingredients.push_back(chicken);
            DiningHallDish chickenAndRice("Chicken and Rice", ingredients, 100);
          displayMenu(chickenAndRice);
          //   free the memory for ingredients
          for (Ingredient* ingredient : ingredients) {
          delete ingredient;
          }
          }
          else if(hoursormenu== 2){ //viewhours
            RestaurantHours nighttimehours;
            nighttimehours.setOpenHours("10 AM–6 PM");
            nighttimehours.setPeakHours("10AM - 3PM");
            nighttimehours.setOffHours("6pm - 10am");
            cout << "Hours of Operation:" << endl;
            cout << "Open Hours: " << nighttimehours.getOpenHours() << endl;
            cout << "Peak Hours: " << nighttimehours.getPeakHours() << endl;
            cout << "Off Hours: " << nighttimehours.getOffHours() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            //return as there's nothing to go from here
          }
          else{
            cout << hoursormenu<< "is not a valid input. Please only put a number (1,2)"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
        }
      } else {//for restaurant choice bigger than vector size
          cout << "Invalid choice. Please pick a valid option." << endl;
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } 

    }
  }

return 0;
}


