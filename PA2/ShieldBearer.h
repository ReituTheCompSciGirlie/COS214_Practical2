#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H

#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector> 
#include <map>
#include <list>


class ShieldBearer: public Soldiers
{
   private:
       int healthPerSoldier;
       int damagePerSoldier;
       int amountOfSoldiersPerUnit;
       int defencePerSoldier;
       string  unitName; 

    public:
      ShieldBearer(int health, int damage, int amount, int defence, const string& name);
      Soldiers* clonis() override;
      ShieldBearer();

};
#endif