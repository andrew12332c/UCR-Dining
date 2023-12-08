cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
add_subdirectory(googletest)

add_executable(runAllTests
  src/Ingredient.cpp
  src/Dish.cpp
  src/DiningHallDish.cpp
  src/Sorting.cpp
  src/CampusRestaurant.cpp
  src/BuildCampusRestaurants.cpp
  src/BuildDiningHalls.cpp
  src/DiningHall.cpp
  src/Restaurant.cpp
  src/RestaurantDish.cpp
  src/RestaurantHours.cpp
  test/DiningHallDishTest.cpp
  test/RestaurantDishTest.cpp
  test/IngredientTest.cpp
  test/RestaurantTests.cpp
  test/RestaurantHoursTests.cpp
  test/CampusRestaurantTest.cpp
  test/DiningHallTest.cpp
  test/SortingTest.cpp
)

add_executable(output
  src/Ingredient.cpp
  src/Dish.cpp
  src/DiningHallDish.cpp
  src/Sorting.cpp
  src/CampusRestaurant.cpp
  src/BuildCampusRestaurants.cpp
  src/BuildDiningHalls.cpp
  src/DiningHall.cpp
  src/Restaurant.cpp
  src/RestaurantDish.cpp
  src/RestaurantHours.cpp
  main.cpp
)

target_link_libraries(runAllTests gtest gtest_main)