#include "Shape.h"

Shape::Shape(string _name)
{
    name = _name;
}

string Shape::getName()
{
    return name;
}

Shape::~Shape()
{
    //dtor
}
