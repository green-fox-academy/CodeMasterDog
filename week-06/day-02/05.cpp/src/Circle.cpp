#include "Circle.h"
#include <iostream>


using namespace std;

Circle::Circle(float radius)
{
    this->radius = radius;
}

void Circle::  print_c()
{
    cout << "The given radius is : " <<radius << endl;
}


float get_area()
{

}


Circle::~Circle()
{
    cout << "Thanks for using this program." << endl;
}

