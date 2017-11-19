#include <iostream>
#include "Mammal.h"

Mammal::Mammal(string _name ):Animal(_name)
{
    name = _name;
}

void Mammal::Feed()
{
    cout <<"Feeding..." << endl;
}

void Mammal::Sleep()
{
    cout << "Sleeping..." << endl;
}

Mammal::~Mammal()
{
    //dtor
}
