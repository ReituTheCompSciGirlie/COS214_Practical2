#include "ShieldBearer.h"
#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

ShieldBearer :: ShieldBearer() : Soldiers() {}

ShieldBearer :: ShieldBearer(int health, int damage, int amount, int defence, const string &name)
   : Soldiers(health, damage, amount, defence, name) {}

Soldiers* ShieldBearer:: clonis() 
{
   return new ShieldBearer(*this);
}

void ShieldBearer::prepare()
{
  cout<< unitName + " are inspecting and reinforcing their shields." <<endl;
}

void ShieldBearer::execute()
{
   cout << unitName + " are advancing with shields up, providing cover." << endl;
}

void ShieldBearer::retreat()
{
  cout << unitName + " are forming a shield wall and retreating in a coordinated manner." << endl;
}

void ShieldBearer::rest()
{
   cout << unitName + " are polishing their shields and reinforcing weak points." <<endl;
}

// missing functions and their implementation
// Implement engage method
void ShieldBearer::engage() {
    // Add logic specific to Boatman's engage behavior
}

// Implement disengage method
void ShieldBearer::disengage() {
    // Add logic specific to Boatman's disengage behavior
}