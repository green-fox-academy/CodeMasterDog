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
    c.print_var();
    cout << endl;
    Triangle t(5, 3);
    t.print_result(t.calc_area());
    t.print_var();
    return 0;
}
