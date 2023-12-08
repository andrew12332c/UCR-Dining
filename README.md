## UCR Dining
Authors:
<span>[Aidan Lok Sang Wong](https://github.com/aidanwls), [Andrew Zhang](https://github.com/andrew12332c), [Branton Ta](https://github.com/brandontaa), [Micael Collins](https://github.com/Ding0-Dongo)</span>

### Project Description
UCR Dining is the ultimate companion to finding healthy, affordable food on campus. The user-friendly app is designed to help students and faculty discover dining options that fit their budget, nutritional needs, and schedule. As students who have lived in campus residence halls, we believe that finding dining information is far too inconvenient. Dining hall menus are difficult to come by, nutritional information is unavailable, and HUB dining is often too busy and costly. Our app will solve this issue by providing all of this information in one easily accessible location. The project will be implemented in C++ and use its standard libraries. Input involves users interacting with the UI, with output being dining information on campus.

Key features:
* Dining Hall menus and opening hours: Users will be able to view the menus and opening hours for both Lothian and Glasgow dining halls.
* Campus restaurant menus and opening hours: Users will be able to view the menus and hours of operation for each restaurant on campus, including prices and images if applicable. These menus do not need to be updated like the dining hall ones as most restaurants have standard menus. 
* Nutritional information: Users will be able to view nutritional information (an estimate for dining hall food) for all available food options on campus.
* Prices: Users will be able to view prices for on-campus restaurant menus. 
* ~~Queue times: Users will be able to view an estimated queue time for each restaurant. (If OpenCV can be implemented, facial detection can be utilized. Otherwise, the data can be collected based on restaurant traffic trends).~~ Removed as OpenCV couldn't be accessed on cs100 server.
* Sorting: Users will be able to sort all food options by price, nutrition (calories, protein etc.), and opening hours.
* User-friendly UI: Users will be able to easily navigate the application to find the information they need.

## User Interface Specification




### Navigation Diagram
![CS100 Navigation Diagram](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/e6bcf0f1-f968-4f36-b478-b72d303aa145)

Each box in the diagram represents a screen. Running the program will put you in the main menu, as indicated by the green circle. An arrow pointing to another box indicates that you can navigate to that screen from the origin of the arrow. Each arrow is labeled with the button that will take you to that screen. Each screen has a back option that will allow you to go to the previous screen.

### Screen Layouts
Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

![CS100 Screen Layouts - Main Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/8041fec2-1dc6-4e4c-a4b2-73e85b5d4229)

This is the main menu. From the first page, you can navigate to view either dining halls or other on-campus restaurants. 
 
![CS100 Screen Layouts - Dining Halls](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/44887ca4-2009-4b07-a25a-14309e3ae575)

Clicking on dining halls takes you to this page. You can then choose between the Lothian and Glasgow dining halls.

![CS100 Screen Layouts - On Campus Restaurants](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/56d32eb8-d62d-4aaf-9410-0d2449eb7bbf)

Clicking on On-Campus Restaurants takes you to this page. There is a dropdown menu for a list of on-campus restaurants.
 
![CS100 Screen Layouts - Restaurant View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/37a82001-0a16-4b78-ab8b-a1dbb413f8c4)

Once you select a restaurant/dining hall, you can navigate to view the restaurant's hours or menu. Selecting a dining hall/restaurant from either of the previous options will take you to this layout.

![CS100 Screen Layouts - Opening Hours](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/a294f40e-e09c-4eac-bed8-67883c7e42dd)

Clicking on hours takes you to this page with a table of opening hours. Again, the screen for both dining halls and on campus restaurants will use the same layout for their details.

![CS100 Screen Layouts - Restaurant Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/4abab8aa-9917-4291-858e-c4bafe32e8bf)
 
Clicking on menu takes you to this page. Each item on the dropdown menu is clickable, which will take you to the next page. The menu can also be sorted by calories, protein and price. For dining hall menus, sorting by price will not be available. Instead, there will be a single price listed for entry. 

![CS100 Screen Layouts - Dish View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/7e5d8b79-6076-4142-9480-4d05a6c3d277)

Clicking on an item in the menu takes you to this page, where the price and nutritional information is listed. For dining hall items, the layout will be similar but without a price. 

![CS100 Screen Layouts - Sorted Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/82bd2d39-de3d-483a-a6a5-8ee5fe506880)

If a sorting method is selected, this is what the sorted menu looks like. 

![CS100 Screen Layouts - Allergies View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/00736e0b-8181-4998-8ee0-5c7b6bd3bd7e)

Clicking on allergies for a dish will take you to this page.

## Class Diagram
![UML Diagram](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/3ec6e8aa-5509-440f-8e8e-ca8e949d82ac)

Attached above is the UML diagram for the project. The implementation for dining halls and other on-campus restaurants are different, so abstract classes are used for dishes and restaurants. An object of the ingredient class will exist for each commonly used ingredient in the dining halls. The implementation for dining hall dishes will use a vector of type ingredients to include each ingredient used in that dish. This implementation vastly improves the scalability of the project as new dishes can use the same ingredient objects. Menus for on-campus restaurants do not require this implementation, as all of the information can be retrieved from the restaurant's website. The dining hall dish-to-restaurant relationship is considered aggregation since the same dish can exist across both dining halls, but on-campus restaurants and items on those menus are considered composition as items only exist on that specific restaurant's menu. Moreover, dining hall menus need to be updated daily—this will likely be implemented using an API on the dining website—whereas other restaurants rarely have menu changes. Currently, the interface only has a single window class as tools to create an interface are still being tested. Future iterations of the UML diagram will have more detailed UI specifications.

## Updated User Interface Specification
![CS100 Final Navigation Diagram](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/90ed6c30-ad98-4464-be53-5317a35916ba)
Note: The navigation diagram is updated for milestone 4. The view hours page was removed and integrated into the view restaurant page. Previous versions of the navigation diagram can be viewed in the commit history.

To improve the user experience, we added an extra option to return to the main menu from most screens, allowing users to return to the menu with a single button instead of hitting "back" several times. The other change made was the inclusion of peak hours on the page for viewing dining hours. That was all the feedback we had to act on from the Scrum meeting in phase 2, so not many changes were made to the navigation diagram and screen layouts. 

The following updated screen layouts reflect the changes made (not all pages are shown as the menu button is consistent for all pages):


![Updated Page 1](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/94cf5852-d6d5-444e-b30c-0e2c08a5579c)
Example of "menu" button.

![Updated Page 2](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/55b49413-988c-4178-9101-93d08d5de4e0)
Added table for peak and off hours.

## Updated Class Diagram
![CS100 Final UML Diagram](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/444e7a93-cf4b-4889-bb17-30eb4e1859d8)
Note: The UML Diagram is updated for milestone 4. Minor changes were made to some methods, pointer implementation was removed, and the GUI Window class has been replaced by Display methods for outputting to the terminal. More sorting methods were also added. The previous version of the UML diagram from milestone 3 can be viewed in the commit history.

Several changes were made to the UML diagram:

* The setCalories and setProtein methods were removed from the base Dish class and are instead defined separately in their subclasses. They were originally designed as abstract functions, but the implementation in derived classes DiningHallDish and RestaurantDish required different parameters. Hence, one subclass couldn't use the inherited functions, and the Liskov Substitution Principle was violated. Making this change eliminates redundant code and improves the readability of the affected classes.
* The RestaurantHours class was added. Initially, the Restaurant class dealt with both restaurant details and dining hours information, violating the Single-Responsibility Principle. Separating the functionality of dining hours and queue times and delegating that to a separate class solves this issue. This improves the code by sizing down the Restaurant class, enhancing readability and simplifies debugging for bugs related to dining hours and queue times. 
* The SortMenu class was added. The Restaurant class and its subclasses violated the Single-Responsibility Principle more than once, as they originally handled sorting on top of creating DiningHall and CampusRestaurant objects. To fix this, the SortMenu class was created to take up all sorting functionality. Separating the sorting methods helps keep the functions maintainable and easy to debug. 
* The final change was adding the BuildDiningHalls and BuildCampusRestaurants classes. Their function is to create DiningHall and CampusRestaurant objects, respectively, with information on UCR dining options. This implementation was originally going to be done in main(), but having classes take on this functionality will greatly improve readability and enforces the Interface Segregation Principle. 

Some class implementations already satisfied SOLID principles. The Interface Segregation Principle was met by separating the implementation of dining halls and on-campus restaurants. Using an abstract Dish class allows for the subclasses to inherit elements that overlap, but only the RestarauntDish class implements price, which isn't applicable to the DiningHallDish class. Introducing this layer of abstraction prevents the DiningHallDish class from implementing methods only RestaurantDish will use, and vice versa. This abstraction also meets the Open-Closed Principle, as adding a new restaurant will go through the respective subclass, leaving the Restaurant class unaffected.


## Screenshots
![Main Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/aa8a399f-1ee0-4f42-ba2b-0b28a9f7fbdc)

The main menu page after running the executable. Entering '1' will change the window to a list of dining halls, and '2' to a list of on-campus restaurants. At any point in the program, entering 'q' will exit the program.

![Dining Hall List](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/a064aaba-b027-4f75-a754-0ba50aaa8e86)

A list of dining halls. 

![Dining Hall View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/87e2b1ec-32c7-4374-a5ea-e8ad2d28c146)

The window after selecting a dining hall.

![Dining Hall Menu (Sorted A-Z)](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/34b11388-c0d0-449e-9a33-9eb5fdf23f81)

Selecting "View Menu" will open this menu window, and each sorting option will reorder the menu with the respective sorting function. The menu in this screenshot is sorted alphabetically from A-Z.

![Campus Restaurant List](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/3e9d41d6-06d5-4e8b-9bd4-5623d176e36a)

A list of on-campus restaurants that have been implemented. The list will be extended in a future sprint. 

![Campus Restaurant View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/6a4854e7-1eb3-436d-8659-cc60eb23abf6)

The window after selecting an on-campus restaurant.

![Campus Restaurant Menu (Sorted by price low to high)](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/e1aa1e94-329d-45f2-8c0a-2999aaaf7462)

Menu for on-campus restaurant sorted by price from low to high.


## Installation/Usage
1. Download all files in the include/ and src/ folders, main.cpp, and CMakeLists.txt.
2. Run the following commands to compile the program:

   cmake .
   
   make
 
4. There will now be a folder "bin" that contains the executable "output".
5. Given that your current directory is the same as CMakeLists.txt, run the executable with: ./bin/output.
6. The program is now running. Navigate through the menus by entering your choice based on what's displayed on the screen.

## Testing
The project was tested with unit tests. Gtest was used extensively for each implemented method, and code was only merged after all tests passed. Attached below are some screenshots of the tests used:

![DiningHallDish Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/56b3ac0b-ee45-4e8c-b661-2671a3b175dd)
![RestaurantDish Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/cdfbf9bc-ad08-4fd5-ad7c-ae8e471ed998)
![Ingredient Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/09cdefcf-6dac-4d86-8098-c4bcdbd629c8)
![Restaurant Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/02f94a6d-9047-4563-a981-1162a7dd692b)
![RestaurantHours Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/ae0eb2c1-5865-4edd-8ed6-eda1cdadad8e)
![CampusRestaurant Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/685491d5-7e71-4d23-90dd-87f94b341478)
![DiningHall Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/3be8f5da-b973-47d9-9fb2-fdf5530d8040)
![SortingRestaurantDish Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/33934202-2be3-43e6-ba54-7d86b33d1762)
![SortingDiningHallDish Tests](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/54982014-736f-4542-b627-84ee3f584785)

## Valgrind
Valgrind was used to ensure no memory leaks occur:
![CS100 Valgrind Memcheck](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/db3038a2-3b0d-4e72-9137-f0028ec53cfb)

