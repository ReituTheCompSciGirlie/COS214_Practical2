#ifndef SOLDIERS_H
#define SOLDIERS_H

#include "Memento.h"
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
      virtual ~Soldiers() = default;
      Soldiers() = default;
      Soldiers(int health, int damage, int amount, int defence, const string& name);
      
      int gethealthPerSoldier();
      int getdamagePerSoldier();
      int getamountOfSoldiersPerUnit();
      int getdefencePerSoldier();
      string  getunitName();


      virtual Soldiers* clonis() = 0; // pure virtual so we can use it to clone
      
      // The methods to help with the Memento design pattern
      Memento* militusMemento() const;
      void vivificaMemento(Memento* memento);
};
#endif;