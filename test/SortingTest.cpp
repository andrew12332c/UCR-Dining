// #include "Dish.h"
#include "RestaurantDish.h"
// #include "Sorting.h"

#include <iostream>
#include <vector>

using namespace std;

void chooseSort(vector<RestaurantDish*>& restaurantDishes);
void sortCaloriesHiLo(vector<RestaurantDish*>& restaurantDishes);
void sortCaloriesLoHi(vector<RestaurantDish*>& restaurantDishes);
void sortProteinHiLo(vector<RestaurantDish*>& restaurantDishes);
void sortProteinLoHi(vector<RestaurantDish*>& restaurantDishes);
void sortPriceHiLo(vector<RestaurantDish*>& restaurantDishes);
void sortPriceLoHi(vector<RestaurantDish*>& restaurantDishes);
void createRestaurantDishes(vector<RestaurantDish*>& restaurantDishes);

int main() {
    bool sorted = false;

    vector<RestaurantDish*> restaurantDishes;
    createRestaurantDishes(restaurantDishes);

    chooseSort(restaurantDishes);

    cout << endl << endl;
}

void chooseSort(vector<RestaurantDish*>& restaurantDishes) {
    int input;

    cout << "1. Calories from highest to lowest" << endl << endl;
    cout << "2. Calories from lowest to highest" << endl << endl;
    cout << "3. Protein from highest to lowest" << endl << endl;
    cout << "4. Protein from lowest to highest" << endl << endl;
    cout << "5. Price from highest to lowest" << endl << endl;
    cout << "6. Price from lowest to highest" << endl << endl;

    cout << "Choose sorting option: ";

    cin >> input;

    if (input == 1) {
        cout << "Before sorting: ";
    
        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName();

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }

        cout << endl << endl;
        
        sortCaloriesHiLo(restaurantDishes);

        cout << "After sorting: ";

        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName() << " (" << restaurantDishes.at(i)->getCalories() << ")";

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }
    }
    else if (input == 2) {
        cout << "Before sorting: ";
    
        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName();

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }

        cout << endl << endl;

        sortCaloriesLoHi(restaurantDishes);

        cout << "After sorting: ";

        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName() << " (" << restaurantDishes.at(i)->getCalories() << ")";

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }
    }
    else if (input == 3) {
        cout << "Before sorting: ";
    
        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName();

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }

        cout << endl << endl;

        sortProteinHiLo(restaurantDishes);

        cout << "After sorting: ";

        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName() << " (" << restaurantDishes.at(i)->getProtein() << ")";

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }
    }
    else if (input == 4) {
        cout << "Before sorting: ";
    
        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName();

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }

        cout << endl << endl;

        sortProteinLoHi(restaurantDishes);

        cout << "After sorting: ";

        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName() << " (" << restaurantDishes.at(i)->getProtein() << ")";

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }
    }
    else if (input == 5) {
        cout << "Before sorting: ";
    
        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName();

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }

        cout << endl << endl;

        sortPriceHiLo(restaurantDishes);

        cout << "After sorting: ";

        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName() << " (" << restaurantDishes.at(i)->getPrice() << ")";

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }
    }
    else if (input == 6) {
        cout << "Before sorting: ";
    
        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName();

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }

        cout << endl << endl;

        sortPriceLoHi(restaurantDishes);

        cout << "After sorting: ";

        for (int i = 0; i < restaurantDishes.size(); ++i) {
            cout << restaurantDishes.at(i)->getName() << " (" << restaurantDishes.at(i)->getPrice() << ")";

            if (i != restaurantDishes.size()) {
                cout << ", ";
            }
        }
    }
}

void sortCaloriesHiLo(vector<RestaurantDish*>& restaurantDishes) {
    for (int i = 0; i < restaurantDishes.size(); ++i) {
        for (int j = i + 1; j < restaurantDishes.size(); ++j) {
            if (restaurantDishes.at(i)->getCalories() < restaurantDishes.at(j)->getCalories()) {
                swap(restaurantDishes.at(i), restaurantDishes.at(j)); // can use temp alternatively to swap
            }
        }
    }
}

void sortCaloriesLoHi(vector<RestaurantDish*>& restaurantDishes) {
    for (int i = 0; i < restaurantDishes.size(); ++i) {
        for (int j = i + 1; j < restaurantDishes.size(); ++j) {
            if (restaurantDishes.at(i)->getCalories() > restaurantDishes.at(j)->getCalories()) {
                swap(restaurantDishes.at(i), restaurantDishes.at(j)); // can use temp alternatively to swap
            }
        }
    }
}

void sortProteinHiLo(vector<RestaurantDish*>& restaurantDishes) {
    for (int i = 0; i < restaurantDishes.size(); ++i) {
        for (int j = i + 1; j < restaurantDishes.size(); ++j) {
            if (restaurantDishes.at(i)->getProtein() < restaurantDishes.at(j)->getProtein()) {
                swap(restaurantDishes.at(i), restaurantDishes.at(j)); // can use temp alternatively to swap
            }
        }
    }
}

void sortProteinLoHi(vector<RestaurantDish*>& restaurantDishes) {
    for (int i = 0; i < restaurantDishes.size(); ++i) {
        for (int j = i + 1; j < restaurantDishes.size(); ++j) {
            if (restaurantDishes.at(i)->getProtein() > restaurantDishes.at(j)->getProtein()) {
                swap(restaurantDishes.at(i), restaurantDishes.at(j)); // can use temp alternatively to swap
            }
        }
    }
}

void sortPriceHiLo(vector<RestaurantDish*>& restaurantDishes) {
    for (int i = 0; i < restaurantDishes.size(); ++i) {
        for (int j = i + 1; j < restaurantDishes.size(); ++j) {
            if (restaurantDishes.at(i)->getPrice() < restaurantDishes.at(j)->getPrice()) {
                swap(restaurantDishes.at(i), restaurantDishes.at(j)); // can use temp alternatively to swap
            }
        }
    }
}

void sortPriceLoHi(vector<RestaurantDish*>& restaurantDishes) {
    for (int i = 0; i < restaurantDishes.size(); ++i) {
        for (int j = i + 1; j < restaurantDishes.size(); ++j) {
            if (restaurantDishes.at(i)->getPrice() > restaurantDishes.at(j)->getPrice()) {
                swap(restaurantDishes.at(i), restaurantDishes.at(j)); // can use temp alternatively to swap
            }
        }
    }
}

void createRestaurantDishes(vector<RestaurantDish*>& restaurantDishes) {
    RestaurantDish *burgerDish = new RestaurantDish("Burger", 500, 30, 8);
    restaurantDishes.push_back(burgerDish);

    RestaurantDish *steakDish = new RestaurantDish("Steak", 410, 30, 10);
    restaurantDishes.push_back(steakDish);

    RestaurantDish *pieDish = new RestaurantDish("Apple Pie", 120, 0, 3);
    restaurantDishes.push_back(pieDish);

    RestaurantDish *curryDish = new RestaurantDish("Chicken Curry", 360, 30, 9);
    restaurantDishes.push_back(curryDish);

    RestaurantDish *spaghettiDish = new RestaurantDish("Spaghetti and Meatballs", 380, 30, 6);
    restaurantDishes.push_back(spaghettiDish);
}

// void createDiningHallDishes() {
//     vector<Ingredient*> ingredients1;
//     Ingredient *rice = new Ingredient("Rice", 200, 5);
//     Ingredient *chicken = new Ingredient("Chicken", 100, 50);

//     ingredients1.push_back(rice);
//     ingredients1.push_back(chicken);

//     DiningHallDish chickenAndRice("Chicken and Rice", ingredients1, 300);

//     vector<Ingredient*> ingredients2;
//     Ingredient *potato = new Ingredient("Potato", 130, 0);
//     Ingredient *salt = new Ingredient("Salt", 30, 0);

//     ingredients2.push_back(potato);
//     ingredients2.push_back(salt);

//     DiningHallDish Saltedfries("Fries", ingredients2, 160);

//     vector<Ingredient*> ingredients3;
//     Ingredient *beef = new Ingredient("Beef", 200, 100);
//     Ingredient *bbqSauce = new Ingredient("BBQ Sauce", 50, 0);

//     ingredients3.push_back(beef);
//     ingredients3.push_back(bbqSauce);

//     DiningHallDish Tritip("Tri-tip", ingredients3, 250);
// }