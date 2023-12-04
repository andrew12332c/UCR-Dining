
#include <iostream>
//#include "RestaurantDish.cpp"
#include "Restaurant.cpp"
//#include "Restaurant.h"
// #include "RestaurantHours.cpp"
// #include "DiningHallDish.cpp"

#include <iostream> 
#include <vector>
#include <string>

using namespace std;

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     MainWindow w;
//     w.show();
//     return a.exec();
// }
int main(){

  vector<Restaurant> restaurants;
  
    Restaurant applebees;
      applebees.setName("Applebee's");
      applebees.setLocation("123 Main St");  
      restaurants.push_back(applebees);

    // Restaurant oliveGarden;
    //   oliveGarden.setName("Olive Garden");
    //   oliveGarden.setLocation("456 Park Rd"); 
    // restaurants.push_back(oliveGarden);

  cout << "Restaurant: " << endl; 
  int i =0;
   cout << i+1 << ". "; 
  // cout << restaurant.getName() << " (" << restaurant.getLocation() << ")" << endl;
  cout << applebees.getName() << " (" << applebees.getLocation() << ")" << endl;
  // Get user's choice
  int choice;
  cout << "Please pick your resturant: " << endl; 
  cin >> choice;
  Restaurant selectedRestaurant = restaurants[choice-1];
  // Print out choice  
  cout << "You picked: " << selectedRestaurant.getName()  << endl; 

  return 0;
}
