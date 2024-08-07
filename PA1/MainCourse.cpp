#include "MainCourse.h"
#include "Course.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

MainCourse::MainCourse(int maxNumberOfItems):Course("Main", maxNumberOfItems)
{
   
}

 void MainCourse::recommendBeverage()
 {
    cout << "Coke" <<endl;
 }