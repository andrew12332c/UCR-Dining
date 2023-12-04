
#include <iostream>
//#include "RestaurantDish.cpp"
#include "Restaurant.cpp"
//#include "Restaurant.h"
// #include "RestaurantHours.cpp"
// #include "DiningHallDish.cpp"

#include <iostream> 
#include <vector>
#include <string>

//g++ -o tester main.cpp
using namespace std;
int main(){
 
  int eatlocation;
  while (true) {
    cout << "Select an option:" << endl;
    cout << "1. Restaurants" << endl;
    cout << "2. Dining Halls" << endl;
    
    // Check if the input is a valid number
    if (!(cin >> eatlocation)) {
        // Invalid input, clear the error flag and discard the input buffer
        cin.clear();
        cout << "Invalid input. Please enter a number." << endl;
    } else {
        // Valid input, break out of the loop
        break;
    }
}


  vector<Restaurant> campsrestaurants;
    Restaurant pandaexpress;
      pandaexpress.setName("Panda Express's");
      pandaexpress.setLocation("900 University Ave");  
      campsrestaurants.push_back(pandaexpress);
  vector<Restaurant> dininghalls;
    Restaurant Glasglow;
      Glasglow.setName("Glasglow");
      Glasglow.setLocation("680 W Linden St");  
      dininghalls.push_back(Glasglow);
      vector<Restaurant>* ptrToVector = nullptr;
         // Choose the vector based on user input
    vector<Restaurant>& chosenVector = (eatlocation == 1) ? campsrestaurants : dininghalls;

    // Display the available restaurants or dining halls
    for (int i = 0; i < chosenVector.size(); ++i) {
        cout << i + 1 << ". " << chosenVector[i].getName() << " (" << chosenVector[i].getLocation() << ")" << endl;
    }
    int choice;
    cout << "Please pick your resturant: " << endl; 
    cin >> choice;
    if (choice >= 1 && choice <= chosenVector.size()) {
        Restaurant selectedRestaurant = chosenVector[choice - 1];
        // Print out the chosen restaurant
        cout << "You picked: " << selectedRestaurant.getName() << " (" << selectedRestaurant.getLocation() << ")" << endl;
    } else {
        cout << "Invalid choice. Please pick a valid option." << endl;
    }
    
  return 0;
}
