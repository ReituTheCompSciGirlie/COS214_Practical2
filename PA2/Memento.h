#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>
#include <iostream>
using namespace std;

class Memento {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;

public:
    Memento(int health, int damage, int defence, int amount, const std::string &name);
    int getHealthPerSoldier() const; 
    int getDamagePerSoldier() const; 
    int getDefencePerSoldier() const; 
    int getAmountOfSoldiersPerUnit() const;
    string getUnitName() const;
};

#endif /* MEMENTO_H */
