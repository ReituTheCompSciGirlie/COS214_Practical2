#include "Boatman.h";
#include "Soldiers.h";
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

 void Boatman ::info() const 
 {
    cout << "Boatman soldier created.\n";
 }

 Boatman::Boatman() //find a way to create these to make it easier 
 {
        healthPerSoldier = 80;
        damagePerSoldier = 70;
        defencePerSoldier = 20;
        amountOfSoldiersPerUnit = 12;
        unitName = "Boatman";
}

