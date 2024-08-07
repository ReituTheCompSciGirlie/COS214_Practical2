#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <map>
#include <vector>
#include <string>


using namespace std;

class MenuItem;

class Course
{
   protected:
     string description;
     int maxNumberOfItems;
     vector<MenuItem*> menuItems;

    public:
      Course(string description, int maxNumberOfItems);
      string getDescription()const;
      bool addMenuItem(string description, float price, int stock);
      void printMenuItems()const;
      void printInventory()const;
      MenuItem* getMenuItem(int index);
      virtual void recommendBeverage() = 0;
      virtual ~Course();
      
};
#endif