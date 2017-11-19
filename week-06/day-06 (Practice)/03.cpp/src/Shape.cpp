#include "Shape.h"

Shape::Shape(string _name)
{
    name = _name;
}

Shape::setName(string name)
{
    this->name = name;
}

string Shape::getName()
{
    return name;
}

Shape::~Shape()
{
    //dtor
}
