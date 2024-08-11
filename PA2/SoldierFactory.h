#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Soldiers.h" 


class Soldiers;

class SoldierFactory
{
    private:
      Soldiers* soldiers;

    public:
      virtual ~SoldierFactory() {}
      virtual Soldiers* createUnit() =0; 
      
       //pure virtual
      virtual int calculateTotalHealthPerUnit()const = 0;
      virtual int calculateTotalDamagePerUnit()const = 0;
      virtual int calculateTotalDefencePerUnit()const = 0; 
      
};
#endif