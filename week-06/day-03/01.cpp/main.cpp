// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)
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
