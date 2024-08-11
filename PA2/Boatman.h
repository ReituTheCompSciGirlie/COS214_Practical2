#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list> 


class Boatman: public Soldiers
{
   private:
       int healthPerSoldier;
       int damagePerSoldier;
       int amountOfSoldiersPerUnit;
       int defencePerSoldier;
       string  unitName; 

    public:
      Boatman();
      Boatman(int health, int damage, int amount, int defence, const string& name);
      Soldiers* clonis() override;
      Boatman(int healthPerSoldier, int defencePerSoldier);

      void engage() override;
      void disengage() override;
      void prepare() override;
      void execute() override;
      void retreat() override;
      void rest() override;
};
#endif