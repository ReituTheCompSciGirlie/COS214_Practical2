#include "Infantry.h";
#include "Soldiers.h";
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

 void Infantry::info() const 
 {
    cout << "Infantry soldier created.\n";
 }

//  Infantry:: Infantry(int healthPerSoldier, int damagePerSoldier,int amountOfSoldiersPerSoldier, int defencePerSoldier) 
//  {
//         this->healthPerSoldier = healthPerSoldier;
//         this->damagePerSoldier = damagePerSoldier;
//         this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
//         this->defencePerSoldier = defencePerSoldier;
//         this->unitName = unitName;
// }

Infantry :: Infantry(int healthyPerSoldier, int defencePerSoldier) 
{
     this->healthPerSoldier  = healthPerSoldier;
     this->defencePerSoldier = defencePerSoldier;
}

Infantry::Infantry()
{
   
}


