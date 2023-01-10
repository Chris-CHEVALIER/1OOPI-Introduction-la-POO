#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;
    string model;
    string color;
    int wheelsNumber;

public:
    Vehicle(string newBrand, string newModel, string newColor);
    void changeColor(string newColor);
    void display() const;
};