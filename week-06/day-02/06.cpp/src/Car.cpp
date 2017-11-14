#include "Car.h"
#include <iostream>
#include <iomanip>



Car::Car(string type, float km)
{
    this->type = type;
    this->km = km;
}

void Car::run(float km)
{
    this->km += km;
}

void Car::print_car()
{
    cout << "The car's type is: " <<type << ", and it already ran " <<  fixed << setprecision(3) << km << "km(s)"<< endl;
}

Car::~Car()
{
    cout << "You can buy this car from us!" << endl;
}
