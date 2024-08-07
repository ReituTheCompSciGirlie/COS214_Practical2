#include "InfantryFactory.h"
#include "Infantry.h";
#include "SoldierFactory.h";
#include "Soldiers.h"


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>


Soldiers* InfantryFactory:: createUnit()
{
    return new Infantry(40, 65);
}


int InfantryFactory::calculateTotalHealthPerUnit()
{
    Infantry newInfantry;
    return newInfantry.gethealthPerSoldier()  * newInfantry.getamountOfSoldiersPerUnit();

}


int InfantryFactory::calculateTotalDamagePerUnit()
{
     Infantry newInfantry;
    return newInfantry.getdamagePerSoldier()  * newInfantry.getamountOfSoldiersPerUnit();
}


int InfantryFactory:: calculateTotalDefencePerUnit()
{
    Infantry newInfantry;
    return newInfantry.getdefencePerSoldier()  * newInfantry.getamountOfSoldiersPerUnit();
} 