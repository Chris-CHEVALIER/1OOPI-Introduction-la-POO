#include "Student.hpp"

Student::Student(string newFirstName, string newLastName, double newAverage, string newEmail, int newAge)
{
    firstName = newFirstName;
    lastName = newLastName;
    average = newAverage;
    email = newEmail;
    age = newAge;
}

void Student::changeEmail(string newEmail)
{
    email = newEmail;
}

void Student::getOld()
{
    if (age < 125 && age >= 18)
    {
        age++;
    }
}

void Student::changeAverage(double newAverage)
{
    if (newAverage <= 20 && newAverage >= 0)
    {
        average = newAverage;
    }
}

void Student::display() const
{
    cout << firstName << " " << lastName << " a " << age << " ans et une moyenne de " << average << "/20 !" << endl;
}

Student::~Student()
{
    cout << "Je suis passé par le destructeur !" << endl;
}