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

int Soldiers::gethealthPerSoldier() const 
{
    return healthPerSoldier;
}

int Soldiers::getdamagePerSoldier() const
{
    return damagePerSoldier;
}

int Soldiers::getamountOfSoldiersPerUnit() const
{
    return amountOfSoldiersPerUnit;
}

int Soldiers::getdefencePerSoldier() const
{
    return defencePerSoldier;
}

std::string Soldiers::getunitName() const {
    return unitName;
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

void Soldiers::engage()
{
   prepare();
   execute(); 
}


void Soldiers::disengage()
{
     retreat();
     rest();
}

//These will be created in the Concrete Classes 

void Soldiers::prepare()
{

}


void Soldiers::execute()
{

}


void Soldiers::retreat()
{

}


void Soldiers::rest()
{
   
}


void Soldiers::takeDamage(int totalDamage) 
{

        int damageAfterDefence = totalDamage - (this->getdefencePerSoldier() * this->getamountOfSoldiersPerUnit());
        if (damageAfterDefence > 0) {
            int soldiersLost = damageAfterDefence / this->gethealthPerSoldier();
            int newAmount = this->getamountOfSoldiersPerUnit() - soldiersLost;

            // Ensure the number of soldiers doesn't go below 0
            if (newAmount < 0) {
                this->setAmountOfSoldiersPerUnit(0);
            } else {
                this->setAmountOfSoldiersPerUnit(newAmount);
            }
        }
    }

void Soldiers::attack(Soldiers* target) 
{
    if (target) {  // Ensure the target pointer is valid
            int totalDamage = this->getdamagePerSoldier() * this->getamountOfSoldiersPerUnit();
            target->takeDamage(totalDamage);  // Pass the totalDamage as an int
        }
}

    void Soldiers::checkStatus() const {
        std::cout << getunitName() << " unit has " << getamountOfSoldiersPerUnit() << " soldiers remaining.\n";
    }