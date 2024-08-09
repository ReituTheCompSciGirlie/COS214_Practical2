#include "Memento.h"
#include <iostream>
#include <string>

using namespace std;

Memento:: Memento(int health, int damage, int defence, int amount, const std::string &name)
: healthPerSoldier(health), damagePerSoldier(damage), defencePerSoldier(defence), amountOfSoldiersPerUnit(amount), unitName(name) 
{}

int Memento:: getHealthPerSoldier() const 
{ 
    return healthPerSoldier; 
}

int Memento:: getDamagePerSoldier() const 
{  
    return damagePerSoldier; 
}

int Memento:: getDefencePerSoldier() const 
{ 
    return defencePerSoldier; 
}

int Memento:: getAmountOfSoldiersPerUnit() const 
{ 
    return amountOfSoldiersPerUnit; 
}

string Memento:: getUnitName() const 
{ 
    return unitName; 
}