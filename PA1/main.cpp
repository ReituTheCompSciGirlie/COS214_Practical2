#include <iostream>
#include "Menu.h"
#include "Course.h"
#include "MenuItem.h"
#include "Starter.h"
#include "MainCourse.h"
#include "Dessert.h"

using namespace std;

int main()
{
  Menu menu;

  // Add course
  Course *starter = new Starter(5);
  Course *mainCourse = new MainCourse(5);
  Course *dessert = new Dessert(5);

  // Edge case: Add null course
  if (!menu.addCourse(nullptr))
  {
    cout << "Cannot add null course." << endl;
  }

  // Add courses to the menu
  menu.addCourse(starter);
  menu.addCourse(mainCourse);
  menu.addCourse(dessert);

  // Edge case: Add duplicate course
  if (!menu.addCourse(starter))
  {
    cout << "Duplicate course not added." << endl;
  }

  // Add menu items to courses
  menu.addMenuItem("Starter", "Salad", 4.99, 10);
  menu.addMenuItem("Starter", "Soup", 3.99, 10);
  menu.addMenuItem("Main", "Steak", 14.99, 5);
  menu.addMenuItem("Main", "Fish", 12.99, 8);
  menu.addMenuItem("Dessert", "Cake", 5.99, 12);
  menu.addMenuItem("Dessert", "Ice Cream", 4.49, 10);

  // Edge case: Add item to a non-existent course
  if (!menu.addMenuItem("Drinks", "Soda", 1.99, 20))
  {
    cout << "Cannot add item to non-existent course." << endl;
  }

  // Edge case: Add item with empty description
  if (!menu.addMenuItem("Starter", "", 1.99, 20))
  {
    cout << "Cannot add item with empty description." << endl;
  }

  // Edge case: Add item with negative price or stock
  if (!menu.addMenuItem("Starter", "InvalidItem1", -1.99, 20))
  {
    cout << "Cannot add item with negative price." << endl;
  }
  if (!menu.addMenuItem("Starter", "InvalidItem2", 1.99, -10))
  {
    cout << "Cannot add item with negative stock." << endl;
  }

  // Print the menu
  cout << "Menu:" << endl;
  menu.printMenu();
  cout << endl;

  // Print inventory
  cout << "Inventory:" << endl;
  menu.inventory();
  cout << endl;

  // Recommend beverages
  cout << "Beverage Recommendations:" << endl;
  starter->recommendBeverage();
  mainCourse->recommendBeverage();
  dessert->recommendBeverage();
  cout << endl;

  menu.inventory();

  // Order an item
  float price = menu.orderItem("Starter", 'b');
  if (price != -1.0f)
  {
    cout << "Ordered item price: " << price << endl;
  }
  else
  {
    cout << "Item not found or out of stock." << endl;
  }

  // Edge case: Order an item that doesn't exist
  price = menu.orderItem("Starter", 'z');
  if (price == 0)
  {
    cout << "Invalid item order handled correctly." << endl;
  }

  // Edge case: Order from a non-existent course
  price = menu.orderItem("Drinks", 'a');
  if (price == 0)
  {
    cout << "Non-existent course order handled correctly." << endl;
  }

  // Print inventory after ordering
  menu.inventory();
  cout << endl;

  // Check if courses are empty
  cout << "Is the menu empty? " << (menu.isCoursesEmpty() ? "Yes" : "No") << endl;

  // Close the shop (clean up memory)
  menu.closeShop();
    //menu.closeShop();

  cout << "Shop closed." << endl;

  return 0;
}