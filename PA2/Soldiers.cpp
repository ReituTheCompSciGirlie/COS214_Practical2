#include "Soldiers.h"

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
using namespace std;

Soldiers:: Soldiers(int health, int damage, int amount, int defence, const string& name)
: healthPerSoldier(health), damagePerSoldier(damage), amountOfSoldiersPerUnit(amount), defencePerSoldier(defence), unitName(name){
}

int Soldiers:: gethealthPerSoldier()
{
    return healthPerSoldier;
}

int Soldiers:: getdamagePerSoldier()
{
    return damagePerSoldier;
}


int Soldiers:: getamountOfSoldiersPerUnit()
{
    return amountOfSoldiersPerUnit;
}

int Soldiers:: getdefencePerSoldier()
{
    return defencePerSoldier;
}