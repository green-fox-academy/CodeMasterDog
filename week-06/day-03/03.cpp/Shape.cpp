#include "Shape.h"
#include <iostream>
#include <iomanip>

using namespace std;

float Shape::how_much_to_paint(double area, int cost_of_paint)
{
    this->cost_of_paint = area * cost_of_paint;

    return this->cost_of_paint;
}
