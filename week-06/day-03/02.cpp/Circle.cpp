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
    result = radius * radius * PI;
    return result;
}

void Circle::print_var()
{
    cout << "The circle's radius is "<< radius<< " cm, area is " << result << " cm2" <<endl;
}
