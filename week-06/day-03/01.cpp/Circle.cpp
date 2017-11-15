#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::calc_area()
{
    cout << "I'm calculating the circle's area now..." << endl;
    return radius * radius* PI;
}
