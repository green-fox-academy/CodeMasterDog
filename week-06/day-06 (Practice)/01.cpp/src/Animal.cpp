#include "Animal.h"

Animal::Animal(string _name)
{
    name = _name;
}

string Animal::getName()
{
    return name;
}

Animal::~Animal()
{
    //dtor
}
