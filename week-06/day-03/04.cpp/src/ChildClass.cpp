#include "ChildClass.h"

ChildClass::ChildClass()
{
    //ctor
}

string ChildClass::first_string()
{
    string str1 = "I'm override the ParentClass's first method!";

    return str1;
}

string ChildClass::second_string()
{
    string str2 = "I'm override the ParentClass's second method! (And I'm neither virtual...)";
    return str2;
}

ChildClass::~ChildClass()
{
    //dtor
}
