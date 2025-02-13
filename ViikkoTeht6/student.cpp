#include "student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int age) : Name(name), Age(age)
{
    cout << "Konstruktori" << endl;
}

Student::~Student()
{
    cout << "Destruktori" << endl;
}

void Student::setAge(int i)
{
    Age = i;
}

void Student::setName(string n)
{
    Name = n;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Nimi: " << getName() << " ika: " << getAge() << endl;
}
