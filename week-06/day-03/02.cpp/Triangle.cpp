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
    cout << "I'm calculating the triangle's area now..." << endl;
    result = a * m / 2;
    return result;
}

void Triangle::print_var()
{
    cout << "The triangle's base is "<< a<< " cm, height is " << m << " cm, and area is " << result << " cm2" <<endl;
}
