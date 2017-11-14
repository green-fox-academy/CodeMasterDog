// Create a `Circle` class that takes it's radius as cinstructor parameter
// It should have a `get_circumference` method that returns it's circumference
// It should have a `get_area` method that returns it's area
#include <iostream>
#include <string>
#include "Circle.h"
#include <iomanip>

using namespace std;

int main()
{

    Circle c_1(3);
    c_1.print_fn(c_1.get_circumference());
    c_1.print_fn(c_1.get_area());

    return 0;
}
