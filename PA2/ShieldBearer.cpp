#include "ShieldBearer.h"
#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

ShieldBearer :: ShieldBearer() : Soldiers() {}

ShieldBearer :: ShieldBearer(int health, int damage, int amount, int defence, const string &name)
   : Soldiers(health, damage, amount, defence, name) {}

Soldiers* ShieldBearer:: clonis() 
{
   return new ShieldBearer(*this);
}