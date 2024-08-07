#include "Menu.h"
#include "Course.h"
#include "MenuItem.h"

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

Menu::Menu()
{
   
}

bool Menu::addCourse(Course* course)
{
    if(course != nullptr)
    {
        if(courses.find(course->getDescription()) != courses.end())
       {
          return false;
       }

       courses[course->getDescription()] = course;
       return true;
    }

    return false;
  
}

bool Menu::addMenuItem(string courseDescription, string description, float price, int stock)
{
    if(!description.empty() && price >= 0 && stock >=0)
    {
       auto it = courses.find(courseDescription);
       if(it != courses.end())
        {
           return it->second->addMenuItem(description,price,stock);
        }
      return false; 
    }

    return false;   //if course does not exist 
}    

void Menu::printMenu()
{
   for (const auto& pair : courses) {
        cout << pair.first << endl; // Print course description
        pair.second->printMenuItems(); // Print items of the course
    } 
}

float Menu::orderItem(string courseDescription, char item) {
    // Find the course
    auto it = courses.find(courseDescription);
    if (it != courses.end()) {
        // Convert the alphabetical index to an integer index
        int index = item - 'a';
        // Get the menu item at the specified index
        MenuItem* menuItem = it->second->getMenuItem(index);
        // Check if the menu item exists and is in stock
        if (menuItem && menuItem->getStock() > 0) {
            // Reduce stock by 1
            menuItem->reduceStock();
            // Return the price of the item
            return menuItem->getPrice();
        }
    }
    // Return 0 if the course/item does not exist or the item is out of stock
    return 0.0f;
}

void Menu::inventory()
{
   for (const auto& pair : courses) {
        cout << pair.first << endl; // Print course description
        pair.second->printInventory(); // Print detailed inventory of menu items
    }    
}

bool Menu::isCoursesEmpty()
{
   return courses.empty();
}

void Menu::closeShop()
{    
    if(!courses.empty())
    {
         cout << "Closing shop. Deleting all " << courses.size() << " courses" << endl;
    for (auto& pair : courses) {
        delete pair.second; // Delete each Course object
    }
    courses.clear(); // Clear the map
    }
    
}

Menu::~Menu()
{
    closeShop(); 
    cout << "Menu destructor called" << endl;
     
}