#include "Car.hpp"

Car::Car(string newBrand, string newModel, string newColor, int newDoorsNumber) : Vehicle(newBrand, newModel, newColor)
{
    wheelsNumber = 4;
    doorsNumber = newDoorsNumber;
}

void Car::openDoor() const
{
    cout << "La voiture ouvre ses portes." << endl;
}

void Car::display() const
{
    Vehicle::display();
    cout << "C'est une voiture à " << wheelsNumber << " roues et " << doorsNumber << " portes." << endl;
}