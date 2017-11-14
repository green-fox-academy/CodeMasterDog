#include "House.h"
#include <iostream>


House::House(string address, unsigned int area)
{
    this->address = address;
    this->area = area;
}

House::~House()
{
    cout << endl << "You can buy this property from us!" << endl;
}

unsigned int House :: get_price()
{
    this->price = market_price * area;

    return this->price;
}

void House :: print_h()
{
    cout << address << endl;
    cout << area << endl;
}
