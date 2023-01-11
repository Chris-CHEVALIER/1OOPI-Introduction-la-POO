#include <iostream>
#include <vector>

using namespace std;

// #include "Student.cpp"
// #include "Vehicle.cpp"
// #include "Car.cpp"
#include "Character.cpp"
#include "Warrior.cpp"
#include "Wizard.cpp"

void introduce(Character const &character)
{
    character.display();
}

int main()
{
    /* cout << "Bonjour l'école Hexagone" << endl;

    Student enzo("Enzo", "SALSON", 16, "enzo.salson@ecole-hexagone.com", 18);
    enzo.getOld();

    enzo.display();

    Car zoe("Renault", "Zoe", "bleue", 5);

    zoe.display();*/

    Warrior geralt;
    // introduce(geralt);

    Wizard yennefer;
    // introduce(yennefer);

    vector<Character *> characters;

    characters.push_back(&geralt);
    characters.push_back(new Wizard("Gandalf"));

    characters[0]->display();
    characters[1]->display();

    cout << characters[0]->getIntelligence() << endl;
    cout << characters[1]->getIntelligence() << endl;

    /* for (int i = 0; i < characters.size(); i++)
    {
        delete characters[i];
        characters[i] = 0;
    } */

    return 0;
}
