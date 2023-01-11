#include "Wizard.hpp"

Wizard::Wizard()
{
}

Wizard::Wizard(string newName) : Character(newName)
{
    mana = 80;
}

void Wizard::display() const
{
    cout << "Ceci est un mage." << endl;
}

int Wizard::getIntelligence() const
{
    return 100;
}