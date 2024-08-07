#include "MenuItem.h"
#include "Course.h"

#include <iostream>
#include <map>
#include <vector>
#include <string>

 using namespace std;


 MenuItem::MenuItem(string description, float price, int stock)   
 {
     this->description = description;
     this->price = price;
     this->stock = stock;
 }


 string MenuItem::getDescription()
 {
    return description;
 }

float MenuItem::getPrice()
{
   return price;
}

int MenuItem::getStock()
{
   return stock;
}

void MenuItem::reduceStock()
{
    stock--;
}