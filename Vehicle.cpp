#include "Vehicle.hpp"

Vehicle::Vehicle(string newBrand, string newModel, string newColor)
{
    brand = newBrand;
    model = newModel;
    color = newColor;
}

void Vehicle::changeColor(string newColor)
{
    color = newColor;
}

void Vehicle::display() const
{
    cout << "Une " << brand << " " << model << " de couleur " << color << endl;
}