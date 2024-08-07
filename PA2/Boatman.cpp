#include "Boatman.h"
#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

using namespace std;

Boatman:: Boatman() : Soldiers()
{
   cout << "Boatman soldier created.\n";
}

Boatman:: Boatman(int health, int damage, int amount, int defence, const string &name)
    : Soldiers(health, damage, amount, defence, name)
{
}

Soldiers* Boatman:: clonis() 
{
   return new Boatman(*this);
}
