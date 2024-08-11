#include "Soldiers.h"
#include "Boatman.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "SoldierFactory.h"
#include "BoatmanFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"

#include <iostream>

int main() {
    // Directly create instances of each soldier type using their constructors
    Boatman boatman(100, 20, 50, 10, "Boatman Unit");
    Infantry infantry(120, 30, 100, 15, "Infantry Unit");
    ShieldBearer shieldBearer(150, 10, 75, 25, "ShieldBearer Unit");

    // Use these instances to check the core functions
    std::cout << "\n--- Soldier Stats ---\n";
    std::cout << "Boatman Unit Health: " << boatman.gethealthPerSoldier() << "\n";
    std::cout << "Infantry Unit Health: " << infantry.gethealthPerSoldier() << "\n";
    std::cout << "ShieldBearer Unit Health: " << shieldBearer.gethealthPerSoldier() << "\n";

    std::cout << "Boatman Unit Damage: " << boatman.getdamagePerSoldier() << "\n";
    std::cout << "Infantry Unit Damage: " << infantry.getdamagePerSoldier() << "\n";
    std::cout << "ShieldBearer Unit Damage: " << shieldBearer.getdamagePerSoldier() << "\n";

    std::cout << "Boatman Unit Defence: " << boatman.getdefencePerSoldier() << "\n";
    std::cout << "Infantry Unit Defence: " << infantry.getdefencePerSoldier() << "\n";
    std::cout << "ShieldBearer Unit Defence: " << shieldBearer.getdefencePerSoldier() << "\n";

    // Engage and attack sequence using the created instances
    std::cout << "\n--- Engagement and Battle ---\n";
    boatman.prepare();
    infantry.prepare();
    shieldBearer.prepare();

    std::cout << "\nExecuting attack sequence:\n";
    boatman.attack(&infantry);
    infantry.attack(&boatman);
    shieldBearer.attack(&infantry);

    std::cout << "\nStatus after first round of attacks:\n";
    boatman.checkStatus();
    infantry.checkStatus();
    shieldBearer.checkStatus();

    boatman.retreat();
    infantry.retreat();
    shieldBearer.retreat();

    boatman.rest();
    infantry.rest();
    shieldBearer.rest();

    // Second round of attacks
    std::cout << "\nSecond round of attacks:\n";
    boatman.attack(&shieldBearer);
    infantry.attack(&shieldBearer);
    shieldBearer.attack(&boatman);

    std::cout << "\nFinal status check:\n";
    boatman.checkStatus();
    infantry.checkStatus();
    shieldBearer.checkStatus();

    // Testing SoldierFactory classes using the same instances
    // std::cout << "\n--- Testing SoldierFactory Classes ---\n";
    // BoatmanFactory boatmanFactory;
    // InfantryFactory infantryFactory;
    // ShieldBearerFactory shieldBearerFactory;

    

    // // Use factories to create units
    // Soldiers* boatmanUnit = boatmanFactory.createUnit();
    // Soldiers* infantryUnit = infantryFactory.createUnit();
    // Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();


    // std::cout << "Boatman Unit Total Health (Factory): " << boatmanFactory.calculateTotalHealthPerUnit() << "\n";
    // std::cout << "Infantry Unit Total Health (Factory): " << infantryFactory.calculateTotalHealthPerUnit() << "\n";
    // std::cout << "ShieldBearer Unit Total Health (Factory): " << shieldBearerFactory.calculateTotalHealthPerUnit() << "\n";

    // std::cout << "Boatman Unit Total Damage (Factory): " << boatmanFactory.calculateTotalDamagePerUnit() << "\n";
    // std::cout << "Infantry Unit Total Damage (Factory): " << infantryFactory.calculateTotalDamagePerUnit() << "\n";
    // std::cout << "ShieldBearer Unit Total Damage (Factory): " << shieldBearerFactory.calculateTotalDamagePerUnit() << "\n";

    // std::cout << "Boatman Unit Total Defence (Factory): " << boatmanFactory.calculateTotalDefencePerUnit() << "\n";
    // std::cout << "Infantry Unit Total Defence (Factory): " << infantryFactory.calculateTotalDefencePerUnit() << "\n";
    // std::cout << "ShieldBearer Unit Total Defence (Factory): " << shieldBearerFactory.calculateTotalDefencePerUnit() << "\n";

    return 0;
}
