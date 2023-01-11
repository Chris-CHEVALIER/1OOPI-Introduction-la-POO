#pragma once
#include <iostream>
#include <string>

using namespace std;

class Warrior : public Character // Un guerrier est un personnage
{
protected:
    int armorPoints; // Chaque guerrier a des points d'armure

public:
    Warrior();
    Warrior(string newName);
    void display() const; // Affiche une description du guerrier
    int getIntelligence() const;
};