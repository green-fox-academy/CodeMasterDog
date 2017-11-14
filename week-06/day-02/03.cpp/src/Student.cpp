#include <iostream>
#include "Student.h"

Student :: Student( std :: string name, unsigned int age)
{
      this->age = age;
      this->name = name;
}

 std :: string Student ::  greet()
{
    std :: string result = "Hello, my name is " + name;
    return result;
}

void Student :: print_fn(std :: string var)
{
    std :: cout << var << std :: endl;
}

Student :: ~Student()
{
    std :: cout << "Bye!!!" << std :: endl;
}
