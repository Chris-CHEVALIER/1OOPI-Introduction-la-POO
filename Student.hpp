#include <iostream>

using namespace std;

class Student
{
private:
    string firstName;
    string lastName;
    double average;
    string email;
    int age;

public:
    Student(string newFirstName, string newLastName, double newAverage, string newEmail, int newAge);
    ~Student();
    void changeEmail(string newEmail);
    void getOld();
    void changeAverage(double newAverage);
    void display() const;
};
