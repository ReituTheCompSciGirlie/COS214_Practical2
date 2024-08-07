#ifndef INFANTRY_H
#define INFANTRY_H

#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector> 
#include <map>
#include <list>


class Infantry: public Soldiers
{
   private:
       int healthPerSoldier;
       int damagePerSoldier;
       int amountOfSoldiersPerUnit;
       int defencePerSoldier;
       string  unitName; 

    public:
      Soldiers* clonis() override;
      Infantry(int health, int damage, int amount, int defence, const string &name);
      Infantry();
};
#endif