#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Vehicle.hpp"

class Car : public Vehicle
{
private:
    int doorsNumber;

public:
    Car(string newBrand, string newModel, string newColor, int newDoorsNumber);
    void openDoor() const;
    void display() const;
};