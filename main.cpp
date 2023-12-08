#include "include/BuildCampusRestaurants.h"
#include "include/BuildDiningHalls.h"
#include "include/Sorting.h"
#include "include/Display.h"

using namespace std;

int main() {
  char userInput;
  int sortIndex;

  //Creating restaurant objects
  DiningHall lothian = BuildDiningHalls::buildLothian();
  DiningHall glasgow = BuildDiningHalls::buildGlasgow();
  vector<DiningHall> diningHalls{lothian, glasgow};

  CampusRestaurant habit = BuildCampusRestaurants::buildHabit();
  CampusRestaurant pandaExpress = BuildCampusRestaurants::buildPandaExpress();
  CampusRestaurant barn = BuildCampusRestaurants::buildBarn();
  vector<CampusRestaurant> restaurants{habit, pandaExpress, barn};

  menu:
    displayMainMenu();
    while (cin >> userInput) {
      if (userInput == '1') {
        goto diningHalls;
      }
      else if (userInput == '2') {
        goto campusRestaurants;
      }
      else if (userInput == 'q') {
        return 0;
      }
      else {
        cout << "Invalid input, enter again:" << endl;
        displayMainMenu();
      }
    }

  diningHalls:
    displayDiningHalls();
    while (cin >> userInput) {
      if (userInput == '1') {
        displaySelectedDiningHall(lothian);

        cin >> userInput;
        if (userInput == '1') {
          displayDiningHallMenu(lothian);
          sortIndex = 0;
          goto sortingDiningHall;
        }
        else if (userInput == 'b') {
          goto diningHalls;
        }
        else if (userInput == 'm') {
          goto menu;
        }
        else if (userInput == 'q') {
          return 0;
        }
      }
      else if (userInput == '2') {
        displaySelectedDiningHall(glasgow);
        
        cin >> userInput;
        if (userInput == '1') {
          displayDiningHallMenu(glasgow);
          sortIndex = 1;
          goto sortingDiningHall;
        }
        else if (userInput == 'b') {
          goto diningHalls;
        }
        else if (userInput == '0') {
          goto menu;
        }
        else if (userInput == 'q') {
          return 0;
        }
      }
      else if (userInput == 'b') {
        goto menu;
      }
      else if (userInput == 'm') {
        goto menu;
      }
      else if (userInput == 'q') {
        return 0;
      }
      else {
        cout << "Invalid input, enter again:" << endl;
        displayDiningHalls();
      }
    }

  campusRestaurants:
    displayCampusRestaurants(restaurants);
    while (cin >> userInput) {
      if (userInput == '1') {
        displaySelectedRestaurant(restaurants.at(0));
        cin >> userInput;
        if (userInput == '1') {
          displayRestaurantMenu(restaurants.at(0));
          sortIndex = int(userInput - 49);
          goto sortingRestaurant;
        }
        else if (userInput == 'b') {
          goto campusRestaurants;
        }
        else if (userInput == 'm') {
          goto menu;
        }
        else if (userInput == 'q') {
          return 0;
        }
      }
      else if (userInput == '2') {
        displaySelectedRestaurant(restaurants.at(1));
        cin >> userInput;
        if (userInput == '1') {
          displayRestaurantMenu(restaurants.at(1));
          sortIndex = int(userInput - 49);
          goto sortingRestaurant;
        }
        else if (userInput == 'b') {
          goto campusRestaurants;
        }
        else if (userInput == 'm') {
          goto menu;
        }
        else if (userInput == 'q') {
          return 0;
        }
      }
      else if (userInput == '3') {
        displaySelectedRestaurant(restaurants.at(2));
        cin >> userInput;
        if (userInput == '1') {
          displayRestaurantMenu(restaurants.at(2));
          sortIndex = int(userInput - 49);
          goto sortingRestaurant;
        }
        else if (userInput == 'b') {
          goto campusRestaurants;
        }
        else if (userInput == 'm') {
          goto menu;
        }
        else if (userInput == 'q') {
          return 0;
        }
      }
      else if (userInput == 'b') {
        goto menu;
      }
      else if (userInput == 'm') {
        goto menu;
      }
      else if (userInput == 'q') {
        return 0;
      }
      else {
        cout << "Invalid input, enter again:" << endl;
        displayDiningHalls();
      }
    }

  sortingDiningHall:
    while (cin >> userInput) {
      if (userInput == '1') {
        diningHalls.at(sortIndex).setMenu(Sorting::sortCaloriesHiLoDiningHallDish(diningHalls.at(sortIndex).getMenu()));
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
      else if (userInput == '2') {
        diningHalls.at(sortIndex).setMenu(Sorting::sortCaloriesLoHiDiningHallDish(diningHalls.at(sortIndex).getMenu()));
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
      else if (userInput == '3') {
        diningHalls.at(sortIndex).setMenu(Sorting::sortProteinHiLoDiningHallDish(diningHalls.at(sortIndex).getMenu()));
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
      else if (userInput == '4') {
        diningHalls.at(sortIndex).setMenu(Sorting::sortProteinLoHiDiningHallDish(diningHalls.at(sortIndex).getMenu()));
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
      else if (userInput == '5') {
        diningHalls.at(sortIndex).setMenu(Sorting::sortAToZDiningHallDish(diningHalls.at(sortIndex).getMenu()));
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
      else if (userInput == '6') {
        diningHalls.at(sortIndex).setMenu(Sorting::sortZToADiningHallDish(diningHalls.at(sortIndex).getMenu()));
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
      else if (userInput == 'b') {
        goto diningHalls;
      }
      else if (userInput == 'm') {
        goto menu;
      }
      else if (userInput == 'q') {
        return 0;
      }
      else {
        cout << "Invalid input, enter again:" << endl;
        displayDiningHallMenu(diningHalls.at(sortIndex));
      }
    }

  sortingRestaurant:
    while (cin >> userInput) {
      if (userInput == '1') {
        restaurants.at(sortIndex).setMenu(Sorting::sortCaloriesHiLoRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '2') {
        restaurants.at(sortIndex).setMenu(Sorting::sortCaloriesLoHiRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '3') {
        restaurants.at(sortIndex).setMenu(Sorting::sortProteinHiLoRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '4') {
        restaurants.at(sortIndex).setMenu(Sorting::sortProteinLoHiRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '5') {
        restaurants.at(sortIndex).setMenu(Sorting::sortPriceHiLoRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '6') {
        restaurants.at(sortIndex).setMenu(Sorting::sortPriceLoHiRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '7') {
        restaurants.at(sortIndex).setMenu(Sorting::sortAToZRestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == '8') {
        restaurants.at(sortIndex).setMenu(Sorting::sortZToARestaurantDish(restaurants.at(sortIndex).getMenu()));
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
      else if (userInput == 'b') {
        goto campusRestaurants;
      }
      else if (userInput == 'm') {
        goto menu;
      }
      else if (userInput == 'q') {
        return 0;
      }
      else {
        cout << "Invalid input, enter again:" << endl;
        displayRestaurantMenu(restaurants.at(sortIndex));
      }
    }
    
  return 0;
}


