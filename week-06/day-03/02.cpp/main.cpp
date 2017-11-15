// Countinue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)
#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "triangle.h"

using namespace std;

int main()
{
    Circle c(3);
    c.print_result(c.calc_area());
    cout << endl;
    Triangle t(7, 11);
    t.print_result(t.calc_area());

    return 0;
}
