#include "Infantry.h"
#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

Infantry:: Infantry() : Soldiers() {}

Infantry:: Infantry(int health, int damage, int amount, int defence, const string &name)
    : Soldiers(health, damage, amount, defence, name) {}

Soldiers* Infantry:: clonis() 
{
   return new Infantry(*this);
}
