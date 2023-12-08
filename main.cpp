#include "include/DiningHallDish.h"
#include "include/Ingredient.h"

#include "include/RestaurantDish.h"
#include "include/RestaurantHours.h"
#include "include/Sorting.h"
#include "include/BuildCampusRestaurants.h"
#include "include/DiningHall.h"
#include <iostream> 
#include <vector>
#include <string>
#include <limits>
//g++ -o tester main.cpp Ingredient.cpp DiningHallDish.cpp
using namespace std;


// template <typename T>
// void displayOptions(vector<T>& restaurants) {
//     cout << "Available Options: " << endl;
//     for (int i = 0; i < restaurants.size(); ++i) {
//         cout << i + 1 << ". " << restaurants[i].getName() << " (" << restaurants[i].getLocation() << ")" << endl;
//     }
//     cout << "888. Back" << endl;
// }
void displayMenu( DiningHallDish& dish) {
    cout << "Menu for " << dish.getName() << ":" << endl;
    cout << "Serving Amount: " << dish.getServingAmount() << " grams" << endl;
    cout << "Calories: " << dish.getCalories() << " kcal" << endl;
    cout << "Protein: " << dish.getProtein() << " grams" << endl;

    cout << "Ingredients:" << endl;
} 
int main(){
    int eatlocation;
    vector<CampusRestaurant> campsrestaurants;
    CampusRestaurant Habit = BuildCampusRestaurants::buildHabit();
    campsrestaurants.push_back(Habit);
    vector<DiningHall> dininghalls;
    DiningHall Glasgloww; 
    Glasgloww.DiningHall::buildGlasgow();
    dininghalls.push_back(Glasgloww);  // Fix here, push into dininghalls, not campsrestaurants
    // Choose the vector based on user input
    while (true) {
        cout << "Select an option:" << endl;
        cout << "1. Restaurants" << endl;
        cout << "2. Dining Halls" << endl;
        cout << "888. Exit Program" << endl;
        cin >> eatlocation;
        if (eatlocation == 1) {
          //  displayOptions(campsrestaurants);
        //    chosenVector = &campsrestaurants;
        // for (const auto& restaurant : campsrestaurants) {
        //         cout << "Restaurant Name: " << restaurant.getName() << endl;
        //         cout << "Restaurant Menu:\n" << restaurant.getMenu() << endl;
        //     }
             cout << "Restaurant Name: " << Habit.getName() << endl;
        } else if (eatlocation == 2) {
         //   displayOptions(dininghalls);
        //    chosenVector = &dininghalls;
         for (const auto& diningHall : dininghalls) {
                cout << "Dining Hall Name: " << endl;//diningHall.getName() << endl;
                cout << "Dining Hall Menu:\n" ;//<< diningHall.getMenu() << endl;
          }
        } else if (eatlocation == 888) {
            cout << "Exiting program." << endl;
            break;
        } else {
            cout << "Invalid input. Please enter 1, 2, or 888." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
//     int choice;
//     while(true){
//       cout << "Please pick your restaurant: " << endl;
//       cin >> choice;

//       if (choice == 888) {o
//           break; // Go back to the main menu
//       }
//       else if (choice >= 1 && choice <= chosenVector->size()) {
//         Restaurant selectedRestaurant = (*chosenVector)[choice - 1];
//         cout << "You picked: " << selectedRestaurant.getName() << " (" << selectedRestaurant.getLocation() << ")" << endl;
//         int hoursormenu=0;
//         while(true){
//           cout << "Select an option:" << endl;
//           cout << "1. View Menu" << endl;
//           cout << "2. View Hours" << endl;
//           cout << "888. Back" << endl;
//           cin >> hoursormenu;
//           if(hoursormenu== 1){
//               cout << "Current Menu:"<<endl;    
//             vector<Ingredient*> ingredients;
//             Ingredient* rice = new Ingredient("Rice", 200, 5);
//             Ingredient* chicken = new Ingredient("Chicken", 100, 50);
//             ingredients.push_back(rice);
//             ingredients.push_back(chicken);
//             DiningHallDish chickenAndRice("Chicken and Rice", ingredients, 100);
//           displayMenu(chickenAndRice);
//           //   free the memory for ingredients
//           for (Ingredient* ingredient : ingredients) {
//           delete ingredient;
//           }
// if (choice >= 1 && choice <= chosenVector->size()) {
// Restaurant selectedRestaurant = (*chosenVector)[choice - 1];
// cout << "You picked: " << selectedRestaurant.getName() << " (" << selectedRestaurant.getLocation() << ")" << endl;
// int hoursormenu=0;}
//           }
//           else if(hoursormenu== 2){ //viewhours
//             RestaurantHours nighttimehours;
//             nighttimehours.setOpenHours("10 AM–6 PM");
//             nighttimehours.setPeakHours("10AM - 3PM");
//             nighttimehours.setOffHours("6pm - 10am");
//             cout << "Hours of Operation:" << endl;
//             cout << "Open Hours: " << nighttimehours.getOpenHours() << endl;
//             cout << "Peak Hours: " << nighttimehours.getPeakHours() << endl;
//             cout << "Off Hours: " << nighttimehours.getOffHours() << endl;
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');
//             //return as there's nothing to go from here
// if (choice >= 1 && choice <= chosenVector->size()) {
// Restaurant selectedRestaurant = (*chosenVector)[choice - 1];
// cout << "You picked: " << selectedRestaurant.getName() << " (" << selectedRestaurant.getLocation() << ")" << endl;
// int hoursormenu=0;}
//           }
//           else if(hoursormenu== 888){
//             if (eatlocation == 1) {
//          displayOptions(campsrestaurants);
//         chosenVector = &campsrestaurants;
//           } else if (eatlocation == 2) {
//         displayOptions(dininghalls);
//         chosenVector = &dininghalls;}
//             break;
//           }
//           else{
//             cout << hoursormenu<< "is not a valid input. Please only put a number (1,2)"<<endl;
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');
//           }
//         }
//       } else {//for restaurant choice bigger than vector size
//           cout << "Invalid choice. Please pick a valid option." << endl;
//           cin.clear();
//           cin.ignore(numeric_limits<streamsize>::max(), '\n');
//       } 

//     }
  }

return 0;
}


