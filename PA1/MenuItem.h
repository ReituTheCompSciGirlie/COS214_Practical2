#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
using namespace std;

 class Course;

 class MenuItem
 {
     private:
       string description;
       float  price;
       int stock;

       public:
        MenuItem(string description, float price, int stock);
        string getDescription();
        float getPrice();
        int getStock();
        void reduceStock();

 };

 #endif