
#include "ShieldBearerFactory.h"



Soldiers* ShieldBearerFactory::createUnit() 
{
    return new ShieldBearer(100, 50, 10, 30, "ShieldBearer");
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()  
{
    ShieldBearer shieldBearer(100, 50, 10, 30, "ShieldBearer");
    return shieldBearer.gethealthPerSoldier() * shieldBearer.getamountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit()  
{
    ShieldBearer shieldBearer(100, 50, 10, 30, "ShieldBearer");
    return shieldBearer.getdamagePerSoldier() * shieldBearer.getamountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit() 
{
    ShieldBearer shieldBearer(100, 50, 10, 30, "ShieldBearer");
    return shieldBearer.getdefencePerSoldier() * shieldBearer.getamountOfSoldiersPerUnit();
}