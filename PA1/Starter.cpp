#include "Starter.h"
#include "Course.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>

Starter::Starter(int maxNumberOfItems) : Course("Starter", maxNumberOfItems)
{
}

void Starter::recommendBeverage()
{
    cout << "Sparkling Water" << endl;
}