#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Infantry.h"
#include "SoldierFactory.h"
#include "Soldiers.h"

class Soldiers;


class InfantryFactory : public SoldierFactory
{
    public:
      Soldiers* createUnit() override;

      int calculateTotalHealthPerUnit() const override;
      int calculateTotalDamagePerUnit() const override;
      int calculateTotalDefencePerUnit() const override; 

};
#endif /* INFANTRYFACTORY_H */