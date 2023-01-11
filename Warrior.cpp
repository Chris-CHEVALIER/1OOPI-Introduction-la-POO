#include "Warrior.hpp"

Warrior::Warrior()
{
}

Warrior::Warrior(string newName) : Character(newName)
{
    armorPoints = 100;
}

void Warrior::display() const
{
    cout << "Ceci est un guerrier." << endl;
}

int Warrior::getIntelligence() const
{
    return 20;
}