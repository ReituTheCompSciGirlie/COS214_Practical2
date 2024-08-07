#ifndef MAINCOURSE_H
#define MAINCOURSE_H

#include "Course.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

class MainCourse : public Course
{
     public:
       MainCourse(int maxNumberOfItems);
       void recommendBeverage();

};


#endif