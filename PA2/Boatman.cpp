#include "Boatman.h"
#include "Soldiers.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

using namespace std;

Boatman:: Boatman() : Soldiers() // default constructor 
{
   cout << "Boatman soldier created.\n";
}

// initialised constructor 
Boatman:: Boatman(int health, int damage, int amount, int defence, const string &name)
    : Soldiers(health, damage, amount, defence, name)
{}

// method to clone, copy the soldiers 
Soldiers* Boatman:: clonis() 
{
   return new Boatman(*this);
}


// need some clearity as to what these methods are doing 
void Boatman::prepare()
{
    cout << this->unitName + " are checking their boats and loading supplies." <<endl;  
}


void Boatman::execute()
{
   cout <<  this->unitName + " are navigating their boats into position and launching ranged attacks." <<endl;
}


void Boatman::retreat()
{
   cout << this->unitName + " are rowing their boats back to a safe distance." <<endl;
}


void Boatman::rest()
{
   cout << this->unitName + " are anchoring their boats and performing maintenance." <<endl;
}

// missing functions and their implementation
// Implement engage method
void Boatman::engage() {
    // Add logic specific to Boatman's engage behavior
}

// Implement disengage method
void Boatman::disengage() {
    // Add logic specific to Boatman's disengage behavior
}

//you need to also create attack functions 