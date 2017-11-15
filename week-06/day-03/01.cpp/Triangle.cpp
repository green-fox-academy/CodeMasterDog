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
    return (float)a * a * m / 2;
}
