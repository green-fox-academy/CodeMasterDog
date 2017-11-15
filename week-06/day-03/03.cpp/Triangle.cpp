#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(double a, double m)
{
    this->a = a;
    this->m = m;
}
double Triangle::calc_area()
{
    result = a * m / 2;
    return result;
}

void Triangle::print_var()
{
    cout << "The triangle's base is "<< a<< " cm, height is " << m << " cm, and the area is " << result << " cm2." <<endl;
}
