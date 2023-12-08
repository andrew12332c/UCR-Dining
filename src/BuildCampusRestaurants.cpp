#include "../include/BuildCampusRestaurants.h"

CampusRestaurant BuildCampusRestaurants::buildHabit() {
    vector<RestaurantDish> habitMenu;
    //Burgers
    habitMenu.push_back(RestaurantDish("Charburger", 500, 21, 5.39));
    habitMenu.push_back(RestaurantDish("Double Char", 730, 37, 6.99));
    habitMenu.push_back(RestaurantDish("BBQ Bacon Char", 630, 27, 7.39));
    habitMenu.push_back(RestaurantDish("Portabella Char", 820, 24, 6.99));
    habitMenu.push_back(RestaurantDish("Teriyaki Char", 570, 22, 6.29));
    habitMenu.push_back(RestaurantDish("Original Impossible", 520, 24, 7.99));

    //Signature Sandwiches
    habitMenu.push_back(RestaurantDish("Grilled Chicken Sandwich", 910, 45, 7.99));
    habitMenu.push_back(RestaurantDish("Spicy Crispy Chicken Sandwich", 960, 38, 9.99));
    habitMenu.push_back(RestaurantDish("Chicken Club", 880, 47, 9.99));
    habitMenu.push_back(RestaurantDish("Chargrilled Ahi Tuna Sandwich", 430, 32, 9.99));
    habitMenu.push_back(RestaurantDish("Veggie Burger", 620, 23, 7.29));

    //Fresh Salads
    habitMenu.push_back(RestaurantDish("BBQ Chicken Salad", 340, 37, 10.29));
    habitMenu.push_back(RestaurantDish("Grilled Chicken Salad", 350, 35, 9.79));
    habitMenu.push_back(RestaurantDish("Grilled Chicken Caesar Salad", 790, 41, 9.99));
    habitMenu.push_back(RestaurantDish("Santa Barbara Cobb Salad", 900, 51, 10.29));
    habitMenu.push_back(RestaurantDish("Caesar Salad", 520, 10, 5.99));
    habitMenu.push_back(RestaurantDish("Garden Salad", 130, 5, 5.99));

    //Sides & Snacks
    habitMenu.push_back(RestaurantDish("10 pc Crispy Chicken Bites", 310, 28, 7.89));
    habitMenu.push_back(RestaurantDish("5 pc Crispy Chicken Bites", 155, 14, 5.79));
    habitMenu.push_back(RestaurantDish("French Fries", 440, 4, 2.99));
    habitMenu.push_back(RestaurantDish("Onion Rings", 500, 10, 3.79));
    habitMenu.push_back(RestaurantDish("Sweet Potato Fries", 374, 3, 3.99));
    habitMenu.push_back(RestaurantDish("Tempura Green Beans", 250, 3, 3.99));
    habitMenu.push_back(RestaurantDish("Side Caesar Salad", 280, 6, 3.99));
    habitMenu.push_back(RestaurantDish("Side Salad", 50, 2, 3.99));

    CampusRestaurant Habit("Habit", "900 University Avenue Riverside, CA 92521", habitMenu);
    return Habit;
}