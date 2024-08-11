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
  string unitName;

public:
  virtual ~Soldiers() = default;
  Soldiers() = default;
  Soldiers(int health, int damage, int amount, int defence, const string &name);

  int gethealthPerSoldier() const;
  int getdamagePerSoldier() const;
  int getamountOfSoldiersPerUnit() const;
  int getdefencePerSoldier() const;
  string getunitName() const;

  virtual Soldiers *clonis() = 0; // pure virtual so we can use it to clone

  // these three functions will help us when it comes to attack and change the values of the soldiers when they win and loose
  void takeDamage(int totalDamage);
  void checkStatus() const;
  void attack(Soldiers *target);
  void setAmountOfSoldiersPerUnit(int amount)
  {
    amountOfSoldiersPerUnit = amount;
  }

  // The methods to help with the Memento design pattern
  Memento *militusMemento() const;
  void vivificaMemento(Memento *memento);

  // Template Method
protected:
  virtual void engage();
  virtual void disengage();
  virtual void prepare();
  virtual void execute();
  virtual void retreat();
  virtual void rest();
};
#endif