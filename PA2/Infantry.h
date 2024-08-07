#ifndef INFANTRY_H;
#define INFANTRY_H;

#include "Soldiers.h";
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
      void info() const override;
      //Infantry(int healthPerSoldier, int damagePerSoldier,int amountOfSoldiersPerSoldier, int defencePerSoldier);
      Soldiers* clonis() override;
      Infantry(int healthyPerSoldier, int defencePerSoldier);
      Infantry();
};
#endif