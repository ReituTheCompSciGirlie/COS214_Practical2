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
    return new Boatman(80, 70, 12, 20, "Boatman");
}

int BoatmanFactory::calculateTotalHealthPerUnit() const
{
    Boatman boatman(80, 70, 12, 20, "Boatman");
    return boatman.gethealthPerSoldier() *  boatman.getamountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit() const
{
    Boatman boatman(80, 70, 12, 20, "Boatman");
    return boatman.getdamagePerSoldier() * boatman.getamountOfSoldiersPerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit() const
{
    Boatman boatman(80, 70, 12, 20, "Boatman");
    return boatman.getdefencePerSoldier() * boatman.getamountOfSoldiersPerUnit();
}