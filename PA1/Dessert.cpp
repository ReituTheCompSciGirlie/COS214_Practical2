#include "Course.h"
#include "Dessert.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

 Dessert::Dessert(int maxNumberOfItems): Course("Dessert", maxNumberOfItems)
 {

 }
    

void Dessert::recommendBeverage()
{
   cout << "Coffee" <<endl;
}