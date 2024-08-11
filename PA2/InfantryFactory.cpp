#include "InfantryFactory.h"
#include "Infantry.h"
#include "SoldierFactory.h"
#include "Soldiers.h"


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>


Soldiers* InfantryFactory:: createUnit()
{
    return new Infantry(100, 50, 10, 30, "Infantry");
}


int InfantryFactory::calculateTotalHealthPerUnit() const 
{
    Infantry newInfantry;
    return newInfantry.gethealthPerSoldier()  * newInfantry.getamountOfSoldiersPerUnit();

}


int InfantryFactory::calculateTotalDamagePerUnit() const
{
     Infantry newInfantry;
    return newInfantry.getdamagePerSoldier()  * newInfantry.getamountOfSoldiersPerUnit();
}


int InfantryFactory:: calculateTotalDefencePerUnit() const
{
    Infantry newInfantry;
    return newInfantry.getdefencePerSoldier()  * newInfantry.getamountOfSoldiersPerUnit();
} 