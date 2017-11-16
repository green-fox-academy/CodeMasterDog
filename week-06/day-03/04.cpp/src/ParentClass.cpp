#include "ParentClass.h"

ParentClass::ParentClass()
{
    //ctor
}

string ParentClass::first_string()
{
    string str1 = "I'ma the first, NOT virtual string.";

    return str1;
}

string ParentClass::second_string()
{
    string str2 = "I'ma the second, the Virtual string.";
    return str2;
}



ParentClass::~ParentClass()
{
    //dtor
}
