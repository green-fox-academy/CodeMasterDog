// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It shoud return the costs of the paingting
#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "triangle.h"

using namespace std;

int main()
{
    Circle c(3);
    cout << "The area of the circle is: "<< c.calc_area() << " cm2." << endl;
    c.print_var();
    cout << endl;
    Triangle t(5, 3);
    cout << "The area of the triangle is: "<< t.calc_area() << " cm2." << endl;
    t.print_var();
    cout << endl;
    cout << "The paint for the circle costs " <<c.how_much_to_paint(c.calc_area(), 5) << " HUF." << endl;    // it costs about 5 HUF to paint a square centimeter
    cout << "The paint for the triangle costs " <<t.how_much_to_paint(t.calc_area(), 5) << " HUF." << endl;

    return 0;
}
