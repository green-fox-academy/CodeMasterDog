#include "Integer.h"

Integer::Integer(int int_one)
{
    this->int_one = int_one;
}

int Integer::PrintVariavle()
{
    return int_one;
}

int Integer::add(int int_one)
{
    this->int_one += int_one;
}

int Integer::add(int int_one, int int_two)
{
    this->int_one += int_one + int_two;
}

int Integer::add(int int_one, int int_two, int int_three)
{
    this->int_one += int_one + int_two + int_three;
}

int Integer::add(int int_one, int int_two, int int_three, int int_four)
{
    this->int_one += int_one + int_two + int_three + int_four;
}

int Integer::add(int int_one, int int_two, int int_three, int int_four, int int_five)
{
    this->int_one += int_one + int_two + int_three + int_four + int_five;
}

Integer::~Integer()
{
    //dtor
}
