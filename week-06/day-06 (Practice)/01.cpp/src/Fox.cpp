#include "Fox.h"

Fox::Fox(string _name): Mammal( _name)
{
    name = _name;
}

string Fox::getFurCoat()
{
    return furcoat;
}

void Fox::setFurCoat(string _furcoat)
{
    furcoat = _furcoat;
}

Fox::~Fox()
{
    //dtor
}
