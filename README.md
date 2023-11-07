 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# <UCR Dining>
 
> Your author list below should include links to all members GitHub (remove existing author). 

> Authors:
[Aidan Lok Sang Wong](https://github.com/aidanwls)

[Andrew Zhang](https://github.com/andrew12332c)

[Branton Ta](https://github.com/brandontaa) 

[Micael Collins](https://github.com/Ding0-Dongo)
 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list and start thinking about the features you will implement. If you want to propose your own original idea, you will have to contact your instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings.

 > ## Expectations
 > * The backend of your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * **Each member of the group must actively participate in the Github Project board, writing unit tests, and reviewing commited code.**
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two to three scrum/check-in meetings with your lab TA/reader at different times in addition to the final demo.

## Project Description
 > UCR Dining is the ultimate companion to finding healthy, affordable food on campus. The user-friendly app is designed to help students and faculty discover dining options that fit their budget, nutritional needs, and schedule. As students who have lived in campus residence halls, we believe that finding dining information is far too inconvenient. Dining hall menus are difficult to come by, nutritional information is unavailable, and HUB dining is often too busy and costly. Our app will solve this issue by providing all of this information in one easily accessible location.
 > The project will be implemented in C++ and use its standard libraries. We are also considering the OpenCV external library to detect queue lengths at restaurants, providing an estimate for wait times—this will require a lot more testing. Input involves users interacting with the UI, with output being dining information on campus.
 > Key features:
 > * Dining Hall menus and opening hours: Users will be able to view the menus and opening hours for both Lothian and Glasgow dining halls, including holidays and special events.
 > * Campus restaurant menus and opening hours: Users will be able to view the menus and hours of operation for each restaurant on campus, including prices and images if applicable. These menus do not need to be updated like the dining hall ones as most restaurants have standard menus. 
 > * Nutritional information: Users will be able to view nutritional information (an estimate for dining hall food) for all available food options on campus.
 > * Queue times: Users will be able to view an estimated queue time for each restaurant. (If OpenCV can be implemented, facial detection can be utilized. Otherwise, the data can be collected based on restaurant traffic trends).
 > * Sorting: Users will be able to sort all food options by price, nutrition (calories, protein etc.), distance from user, and opening hours.
 > * User-friendly UI: Users will be able to easily navigate the application to find the information they need.

 > Your project description should summarize the project you are proposing. Be sure to include:
 > * Why is it important or interesting to you?
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > * What will be the input/output of your project?
 > * What are the features that the project provides?
 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 > 
 > You also need to set up an empty project board using GitHub projects (board view). Make sure you add the board under your project repository. You should also have a Product Backlog and In testing columns added.
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` (aka Sprint Backlog) column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots on Tuesday of week 6. The check-ins will occur on Zoom. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))
> 




### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.
> 
> ![CS100 Navigation Diagram](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/e6bcf0f1-f968-4f36-b478-b72d303aa145)
>
> Each box in the diagram represents a screen. Running the program will put you in the main menu, as indicated by the green circle. An arrow pointing to another box indicates that you can navigate to that screen from the origin of the arrow. Each arrow is labeled with the button that will take you to that screen. Each screen has a back option that will allow you to go to the previous screen.

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.
> 
> ![CS100 Screen Layouts - Main Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/8041fec2-1dc6-4e4c-a4b2-73e85b5d4229)
> 
> This is the main menu. From the first page, you can navigate to view either dining halls or other on-campus restaurants. 
> 
> ![CS100 Screen Layouts - Dining Halls](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/44887ca4-2009-4b07-a25a-14309e3ae575)
> 
> Clicking on dining halls takes you to this page. You can then choose between the Lothian and Glasgow dining halls.
> 
> ![CS100 Screen Layouts - On Campus Restaurants](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/56d32eb8-d62d-4aaf-9410-0d2449eb7bbf)
> 
> Clicking on On-Campus Restaurants takes you to this page. There is a dropdown menu for a list of on-campus restaurants.
> 
> ![CS100 Screen Layouts - Restaurant View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/37a82001-0a16-4b78-ab8b-a1dbb413f8c4)
> 
> Once you select a restaurant/dining hall, you can navigate to view the restaurant's hours or menu. Selecting a dining hall/restaurant from either of the previous options will take you to this layout.
>
> ![CS100 Screen Layouts - Opening Hours](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/a294f40e-e09c-4eac-bed8-67883c7e42dd)
> 
> Clicking on hours takes you to this page with a table of opening hours. Again, the screen for both dining halls and on campus restaurants will use the same layout for their details.
>
> ![CS100 Screen Layouts - Restaurant Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/4abab8aa-9917-4291-858e-c4bafe32e8bf)
> 
> Clicking on menu takes you to this page. Each item on the dropdown menu is clickable, which will take you to the next page. The menu can also be sorted by calories, protein and price. For dining hall menus, sorting by price will not be available. Instead, there will be a single price listed for entry. 
>
> ![CS100 Screen Layouts - Dish View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/7e5d8b79-6076-4142-9480-4d05a6c3d277)
> 
> Clicking on an item in the menu takes you to this page, where the price and nutritional information is listed. For dining hall items, the layout will be similar but without a price. 
>
> ![CS100 Screen Layouts - Sorted Menu](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/82bd2d39-de3d-483a-a6a5-8ee5fe506880)
> 
> If a sorting method is selected, this is what the sorted menu looks like. 
>
> ![CS100 Screen Layouts - Allergies View](https://github.com/cs100/final-project-awong230-azhan128-bta011-mcoll041/assets/56686278/00736e0b-8181-4998-8ee0-5c7b6bd3bd7e)
> 
> Clicking on allergies for a dish will take you to this page.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
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
 
