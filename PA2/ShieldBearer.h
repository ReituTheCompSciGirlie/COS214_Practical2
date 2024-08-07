#ifndef SHIELDBEARER_H;
#define SHIELDBEARER_H;

#include "Soldiers.h";
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
      void info() const override;
      ShieldBearer(int  damagePerSoldier , int defencePerSoldier);
      Soldiers* clonis() override;
      ShieldBearer();

};
#endif