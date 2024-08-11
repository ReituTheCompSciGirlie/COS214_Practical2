#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "ShieldBearer.h"
#include "SoldierFactory.h"
#include "Soldiers.h"


class ShieldBearerFactory: public SoldierFactory
{
    public:
      Soldiers* createUnit() override;

      int calculateTotalHealthPerUnit();
      int calculateTotalDamagePerUnit();
      int calculateTotalDefencePerUnit();
      ShieldBearerFactory(); 


};
#endif