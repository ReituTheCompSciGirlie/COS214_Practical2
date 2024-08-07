#include "SoldierFactory.h"
#include "Boatman.h"
#include "BoatmanFactory.h"
#include "Soldiers.h"

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>


Soldiers* BoatmanFactory :: createUnit() 
{
    return new Boatman;
}

int BoatmanFactory::calculateTotalHealthPerUnit()  
{
    Boatman boatman;
    return boatman.gethealthPerSoldier() *  boatman.getamountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit()  
{
    Boatman boatman;
    return boatman.getdamagePerSoldier() * boatman.getamountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit() 
{
    Boatman boatman;
    return boatman.getdefencePerSoldier() * boatman.getamountOfSoldiersPerUnit();
}