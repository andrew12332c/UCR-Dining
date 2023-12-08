#include <string>
#include <iostream>
#include "../include/DiningHall.h"
#include "../include/CampusRestaurant.h"

using namespace std;

void displayMainMenu() {
    cout << endl;
    cout << "============================================================" << endl;
    cout << "Welcome to UCR Dining! Select an option: " << endl;
    cout << "1. View Dining Halls" << endl;
    cout << "2. View Campus Restaurants" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}

void displayDiningHalls() {
    cout << endl;
    cout << "============================================================" << endl;
    cout << "Select a dining hall: " << endl;
    cout << "1. Lothian" << endl;
    cout << "2. Glasgow" << endl;
    cout << endl;
    cout << "b. Back" << endl;
    cout << "m. Main Menu" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}

void displayCampusRestaurants(vector<CampusRestaurant> campusRestaurants) {
    cout << endl;
    cout << "============================================================" << endl;
    cout << "Select an on-campus restaurant:" << endl;
    for (unsigned i = 0; i < campusRestaurants.size(); ++i) {
        cout << i+1 << ". " << campusRestaurants.at(i).getName() << endl;
    }
    cout << endl;
    cout << "b. Back" << endl;
    cout << "m. Main Menu" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}

void displaySelectedDiningHall(DiningHall diningHall) {
    cout << endl;
    cout << "============================================================" << endl;
    cout << diningHall.getName() << endl;
    cout << "============================================================" << endl;
    cout << "Opening hours: Mon-Fri 7:30 AM - 2:30 PM, 5:00 PM - 9:00 PM" << endl;
    cout << "               Sat-Sun 10:00 AM - 2:30 PM, 5:00 PM - 9:00 PM" << endl;
    cout << "Location: " << diningHall.getLocation() << endl;
    cout << "============================================================" << endl;
    cout << "1. View Menu" << endl;
    cout << endl;
    cout << "b. Back" << endl;
    cout << "m. Main Menu" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}

void displaySelectedRestaurant(CampusRestaurant restaurant) {
    cout << endl;
    cout << "============================================================" << endl;
    cout << restaurant.getName() << endl;
    cout << "============================================================" << endl;
    cout << "Opening hours: Mon-Thu 9:00 AM - 7:00 PM" << endl;
    cout << "               Fri     9:00 AM - 6:00 PM" << endl;
    cout << "               Sat-Sun Closed" << endl;
    cout << "Location: " << restaurant.getLocation() << endl;
    cout << "============================================================" << endl;
    cout << "1. View Menu" << endl;
    cout << endl;
    cout << "b. Back" << endl;
    cout << "m. Main Menu" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}

void displayDiningHallMenu(DiningHall dininghall) {
    cout << endl;
    cout << "============================================================" << endl;
    cout << dininghall.getName() << " Menu: " << endl;
    cout << "============================================================" << endl;
    for (unsigned i = 0; i < dininghall.getMenu().size(); ++i) {
        cout << dininghall.getMenu().at(i).getName() << " | Calories: " << dininghall.getMenu().at(i).getCalories() << " | Protein: " << dininghall.getMenu().at(i).getProtein() << endl;
    }
    cout << "============================================================" << endl;
    cout << "1. Sort by calories (high to low)" << endl;
    cout << "2. Sort by calories (low to high)" << endl;
    cout << "3. Sort by protein (high to low)" << endl;
    cout << "4. Sort by protein (low to high)" << endl;
    cout << "5. Sort by name (A to Z)" << endl;
    cout << "6. Sort by name (Z to A)" << endl;
    cout << endl;
    cout << "b. Back" << endl;
    cout << "m. Main Menu" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}

void displayRestaurantMenu(CampusRestaurant restaurant) {
    cout << endl;
    cout << "============================================================" << endl;
    cout << restaurant.getName() << " Menu:" << endl;
    cout << "============================================================" << endl;
    for (unsigned i = 0; i < restaurant.getMenu().size(); ++i) {
        cout << restaurant.getMenu().at(i).getName() << " | Calories: " << restaurant.getMenu().at(i).getCalories() << " | Protein: " << restaurant.getMenu().at(i).getProtein() << " | Price: " << restaurant.getMenu().at(i).getPrice() << endl;
    }
    cout << "============================================================" << endl;
    cout << "1. Sort by calories (high to low)" << endl;
    cout << "2. Sort by calories (low to high)" << endl;
    cout << "3. Sort by protein (high to low)" << endl;
    cout << "4. Sort by protein (low to high)" << endl;
    cout << "5. Sort by price (high to low)" << endl;
    cout << "6. Sort by price (low to high)" << endl;
    cout << "7. Sort by name (A to Z)" << endl;
    cout << "8. Sort by name (Z to A)" << endl;
    cout << endl;
    cout << "b. Back" << endl;
    cout << "m. Main Menu" << endl;
    cout << "q. Quit" << endl;
    cout << "============================================================" << endl;
}