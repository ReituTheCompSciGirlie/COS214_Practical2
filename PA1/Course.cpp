#include "Course.h"
#include "MenuItem.h"

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


Course::Course(string description, int maxNumberOfItems)
{
   this->description = description;
   this-> maxNumberOfItems = maxNumberOfItems;
}

string Course::getDescription()const
{
    return this->description;
}

bool Course::addMenuItem(string description, float price, int stock)
{
    if (menuItems.size() < static_cast<std::vector<MenuItem*>::size_type>(maxNumberOfItems))
    {
        // Add a new item 
        menuItems.push_back(new MenuItem(description, price, stock));
        return true;  // Return true if succeeds
    }
    return false;
}

void Course::printMenuItems()const
{
    string alphabet = "abcdefghijklmnopqrstuvwyz";
    for (int i = 0; i < static_cast<int>(menuItems.size()); i++)
    {
        cout << "\t" << alphabet[i] << ".\t" << menuItems[i]->getDescription() << "\n";
    }
}

void Course::printInventory()const
{
    string alphabet = "abcdefghijklmnopqrstuvwyz";
    for(int i = 0; i < static_cast<int>(menuItems.size()); i++)
    {
        cout << "\t" << alphabet[i] << ".\t" << menuItems[i]->getDescription() << "\t" ;
        cout << menuItems[i]->getPrice() << "\t" << menuItems[i]->getStock() << "\n";
    }
}

MenuItem* Course::getMenuItem(int index)
{ 
   if(index >= 0 && static_cast<size_t>(index)  < menuItems.size())
   {
       if(menuItems[index] != nullptr)
    {
       return menuItems.at(index);
    }
    
   }
    
   return nullptr;
}

void Course::recommendBeverage() //this is a pure virtual function 
{
 
}

Course::~Course()
{
   for(auto &m : menuItems)
   {
      delete m;
   }

   menuItems.clear();  
}
