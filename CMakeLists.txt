cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/testExecutables")
add_subdirectory(googletest)

add_executable(runAllTests
  test/DiningHallDishTest.cpp
  test/RestaurantDishTest.cpp
  test/IngredientTest.cpp
  test/RestaurantTests.cpp
  test/RestaurantHoursTests.cpp
)

target_link_libraries(runAllTests gtest gtest_main)