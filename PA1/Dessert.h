#ifndef DESSERT_H
#define DESSERT_H

#include "Course.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Dessert : public Course
{
    public:
     Dessert(int maxNumberOfItems);
     void recommendBeverage();

};
#endif

