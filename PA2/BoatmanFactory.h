#ifndef BOATMANFACTORY_H;
#define BOATMANFACTORY_H;

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "SoldierFactory.h";
#include "Boatman.h";


class Soldiers;

class BoatmanFactory: public SoldierFactory
{
     public:
      Soldiers* createUnit();
      int calculateTotalHealthPerUnit();
      int calculateTotalDamagePerUnit();
      int calculateTotalDefencePerUnit();  
};
#endif;