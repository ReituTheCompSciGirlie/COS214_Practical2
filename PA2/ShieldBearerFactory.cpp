
#include "ShieldBearerFactory.h"



Soldiers* ShieldBearerFactory::createUnit() 
{
    return new ShieldBearer(100, 50, 10, 30, "ShieldBearer");
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()  
{
    ShieldBearer shieldBearer;
    return shieldBearer.gethealthPerSoldier() * shieldBearer.getamountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit()  
{
    ShieldBearer shieldBearer;
    return shieldBearer.getdamagePerSoldier() * shieldBearer.getamountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit() 
{
    ShieldBearer shieldBearer;
    return shieldBearer.getdefencePerSoldier() * shieldBearer.getamountOfSoldiersPerUnit();
}