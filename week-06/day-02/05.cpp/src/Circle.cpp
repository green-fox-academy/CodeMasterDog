#include "Circle.h"
#include <iostream>
#include <iomanip>

using namespace std;

Circle::Circle(float radius)
{
    this->radius = radius;
}

void Circle::print_fn(float var)
{
    cout << fixed << setprecision(5) << var << endl;
}

float Circle::get_circumference()
{
    return 2 * radius * PI;
}

float Circle::get_area()
{
    return radius * radius* PI;
}

Circle::~Circle()
{
    cout << "Thanks for using this program." << endl;
}

