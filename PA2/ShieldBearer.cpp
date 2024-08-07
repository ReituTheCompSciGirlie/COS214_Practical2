#include "ShieldBearer.h";
#include "Soldiers.h";
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

 void ShieldBearer ::info() const 
 {
    cout << "ShieldBearer soldier created.\n";
 }

 ShieldBearer::ShieldBearer(int damagePerSoldier, int defencePerSoldier ):Soldiers() 
 {
        healthPerSoldier = 120;
        damagePerSoldier = 40;
        defencePerSoldier = 80;
        amountOfSoldiersPerUnit = 8;
        unitName = "ShieldBearer";
}