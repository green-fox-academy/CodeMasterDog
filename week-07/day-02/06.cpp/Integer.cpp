#include "Integer.h"

Integer::Integer(int int_one)
{
    this->int_one = int_one;
}

Integer::Integer(Integer &_obj, int int_one)
{
  this->int_one = _obj.PrintVariavle() + int_one;
}

int Integer::PrintVariavle()
{
    return int_one;
}

Integer::add()
{
    this->int_one += this->int_one;
}

Integer::add_task6(int& num)
{
    int_one += num;
}

Integer::Integer()
{
    this->int_one = 0;
}

Integer::~Integer()
{
    //dtor
}
