#include "Soldiers.h"
#include "Memento.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
using namespace std;

Soldiers::Soldiers(int health, int damage, int amount, int defence, const string &name)
    : healthPerSoldier(health), damagePerSoldier(damage), amountOfSoldiersPerUnit(amount), defencePerSoldier(defence), unitName(name)
{
}

int Soldiers::gethealthPerSoldier()
{
    return healthPerSoldier;
}

int Soldiers::getdamagePerSoldier()
{
    return damagePerSoldier;
}

int Soldiers::getamountOfSoldiersPerUnit()
{
    return amountOfSoldiersPerUnit;
}

int Soldiers::getdefencePerSoldier()
{
    return defencePerSoldier;
}

// The methods that should help with the Memento, design pattern
Memento* Soldiers::militusMemento() const
{
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier,
                       amountOfSoldiersPerUnit, unitName);
}

void Soldiers::vivificaMemento(Memento *memento)
{
    if (memento)
    {
        healthPerSoldier = memento->getHealthPerSoldier();
        damagePerSoldier = memento->getDamagePerSoldier();
        defencePerSoldier = memento->getDefencePerSoldier();
        amountOfSoldiersPerUnit = memento->getAmountOfSoldiersPerUnit();
        unitName = memento->getUnitName();
    }
}