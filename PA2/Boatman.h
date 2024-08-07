#ifndef BOATMAN_H;
#define BOATMAN_H;

#include "Soldiers.h";
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
      void info() const override;
      Boatman();
      Soldiers* clonis();
};
#endif