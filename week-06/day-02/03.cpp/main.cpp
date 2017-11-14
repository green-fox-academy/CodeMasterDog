#include <iostream>
#include <string>
#include "Student.h"
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

using namespace std;

int main()
{
    Student st_01("John", 21);

    st_01.print_fn(st_01.greet());

  return 0;
}
