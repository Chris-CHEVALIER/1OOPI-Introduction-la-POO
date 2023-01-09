#include <iostream>

using namespace std;

#include "Student.cpp"

int main()
{
    cout << "Bonjour l'école Hexagone" << endl;

    Student enzo("Enzo", "SALSON", 16, "enzo.salson@ecole-hexagone.com", 18);
    enzo.getOld();

    enzo.display();

    return 0;
}
