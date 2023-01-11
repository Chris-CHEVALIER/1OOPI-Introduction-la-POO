#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
    string name; // Chaque personnage a un nom

public:
    Character();
    Character(string newName);
    ~Character();
    virtual void display() const; // Affiche une description du personnage
    virtual int getIntelligence() const = 0;
};