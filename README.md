## UCR Dining
Authors:
<span>[Aidan Lok Sang Wong](https://github.com/aidanwls), [Andrew Zhang](https://github.com/andrew12332c), [Branton Ta](https://github.com/brandontaa), [Micael Collins](https://github.com/Ding0-Dongo)</span>

### Project Description
UCR Dining is the ultimate companion to finding healthy, affordable food on campus. The user-friendly app is designed to help students and faculty discover dining options that fit their budget, nutritional needs, and schedule. As students who have lived in campus residence halls, we believe that finding dining information is far too inconvenient. Dining hall menus are difficult to come by, nutritional information is unavailable, and HUB dining is often too busy and costly. Our app will solve this issue by providing all of this information in one easily accessible location.
The project will be implemented in C++ and use its standard libraries. We are also considering the OpenCV external library to detect queue lengths at restaurants, providing an estimate for wait times—this will require a lot more testing. Input involves users interacting with the UI, with output being dining information on campus.

Key features:
* Dining Hall menus and opening hours: Users will be able to view the menus and opening hours for both Lothian and Glasgow dining halls, including holidays and special events.
* Campus restaurant menus and opening hours: Users will be able to view the menus and hours of operation for each restaurant on campus, including prices and images if applicable. These menus do not need to be updated like the dining hall ones as most restaurants have standard menus. 
* Nutritional information: Users will be able to view nutritional information (an estimate for dining hall food) for all available food options on campus.
* Queue times: Users will be able to view an estimated queue time for each restaurant. (If OpenCV can be implemented, facial detection can be utilized. Otherwise, the data can be collected based on restaurant traffic trends).
* Sorting: Users will be able to sort all food options by price, nutrition (calories, protein etc.), distance from user, and opening hours.
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
![UML Diagram](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/e740350a-5a84-4e88-a622-8353abbfaddb)

Attached above is the UML diagram for the project. The implementation for dining halls and other on-campus restaurants are different, so abstract classes are used for dishes and restaurants. An object of the ingredient class will exist for each commonly used ingredient in the dining halls. The implementation for dining hall dishes will use a vector of type ingredients to include each ingredient used in that dish. This implementation vastly improves the scalability of the project as new dishes can use the same ingredient objects. Menus for on-campus restaurants do not require this implementation, as all of the information can be retrieved from the restaurant's website. The dining hall dish-to-restaurant relationship is considered aggregation since the same dish can exist across both dining halls, but on-campus restaurants and items on those menus are considered composition as items only exist on that specific restaurant's menu. Moreover, dining hall menus need to be updated daily—this will likely be implemented using an API on the dining website—whereas other restaurants rarely have menu changes. Currently, the interface only has a single window class as tools to create an interface are still being tested. Future iterations of the UML diagram will have more detailed UI specifications.

 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
