#pragma once
#include <iostream>
#include <string>

using namespace std;

class Wizard : public Character // Un mage est un personnage
{
protected:
    int mana; // Chaque mage a des points de mana

public:
    Wizard();
    Wizard(string newName);
    void display() const; // Affiche une description du mage
    int getIntelligence() const;
};