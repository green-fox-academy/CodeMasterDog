#include <iostream>

#include "Car.h"

Car::Car(string type,  int km)
{
    this->type = type;
    this->km = km;
}

void Car::run(int number)
{
    km+= number;
}

void Car::getter()
{
    cout << "type: " << type << endl;
    cout << "km: " << km << endl;
}

Car::~Car()
{
    //dtor
}
