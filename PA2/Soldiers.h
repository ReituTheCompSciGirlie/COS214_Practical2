#ifndef SOLDIERS_H;
#define SOLDIERS_H;

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

using namespace std;


class Soldiers
{
     private:
       int healthPerSoldier;
       int damagePerSoldier;
       int amountOfSoldiersPerUnit;
       int defencePerSoldier;
       string  unitName;

    public:
      virtual void info() const = 0; // Pure virtual function
      virtual ~Soldiers();
      Soldiers();
      
      int gethealthPerSoldier();
      int getdamagePerSoldier();
      int getamountOfSoldiersPerUnit();
      int getdefencePerSoldier();
      string  getunitName();


      virtual Soldiers* clonis() = 0;
      
};
#endif;