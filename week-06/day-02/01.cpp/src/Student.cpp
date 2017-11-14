#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string name, unsigned int age)
{
    this->name = name;
    this->age = age;
}

void Student :: print_st()
{
    cout << "The student's name is: " << name << " and he or she is " << age << " years old" << endl;
}

Student::~Student()
{
    std ::  cout << "See you!" << std :: endl;
}
