#include "Infantry.h"
#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

Infantry:: Infantry() : Soldiers() {}

Infantry:: Infantry(int health, int damage, int amount, int defence, const string &name)
    : Soldiers(health, damage, amount, defence, name) {}

Soldiers* Infantry:: clonis() 
{
   return new Infantry(*this);
}

// missing functions and their implementation below
void Infantry::prepare()
{
  cout<< unitName + " are inspecting and reinforcing their shields." <<endl;
}

void Infantry::execute()
{
   cout << unitName + " are advancing with shields up, providing cover." << endl;
}

void Infantry::retreat()
{
  cout << unitName + " are forming a shield wall and retreating in a coordinated manner." << endl;
}

void Infantry::rest()
{
   cout << unitName + " are polishing their shields and reinforcing weak points." <<endl;
}

// Implement engage method
void Infantry::engage() {
    // Add logic specific to Boatman's engage behavior
}

// Implement disengage method
void Infantry::disengage() {
    // Add logic specific to Boatman's disengage behavior
}