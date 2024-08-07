#ifndef STARTER_H
#define STARTER_H

#include "Course.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

class Starter : public Course{
     public:
       Starter(int maxNumberOfItems);
       void recommendBeverage();

};


#endif