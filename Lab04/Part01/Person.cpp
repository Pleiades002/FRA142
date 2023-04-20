#include "Person.h"
#include <iostream>
using namespace std;

// ***************************-Person-***************************
Person::Person()
{
    name = "";
    height = 0;
    age = 0;
}

Person::Person(string n, int h, int a)
{
    name = n;
    height = h;
    age = a;
}

Person::~Person()
{
}

void Person::showPersonInfo()
{
    cout << "Person name: " << name << endl;
    cout << "height: " << height << endl;
    cout << "age: " << age << endl;
}

// ***************************-Student-***************************

Student::Student() : Person()
{
    id = 0;
    grade = 0;
}

Student::Student(string name, int height, int age, int i, int g) : Person(name, height, age)
{
    id = i;
    grade = g;
}

Student::~Student()
{
}

void Student::showStudenInfo()
{
    showPersonInfo();
    cout << "id:" << id << endl;
    cout << "grade:" << grade << endl;
}

// ***************************-Teacher-***************************

Teacher::Teacher() : Person()
{
    subject = "";
}

Teacher::Teacher(string name, int height, int age, string sub) : Person(name, height, age)
{
    subject = sub;
}

Teacher::~Teacher()
{
}

string Teacher::getSubject()
{
    return subject;
}

void Teacher::setSubject(string sub)
{
    subject = sub;
}

void Teacher::showTeacherInfo()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Heigh: " << height << endl;
    cout << "Subject: " << subject << endl;
}
