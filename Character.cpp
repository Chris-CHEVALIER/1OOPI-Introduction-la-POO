#include "Character.hpp"

Character::Character()
{
    name = "John Doe";
}

Character::Character(string newName)
{
    name = newName;
}

Character::~Character()
{
    // delete this;
    // this = 0;
}

void Character::display() const
{
    cout << "Ceci est un personnage." << endl;
}