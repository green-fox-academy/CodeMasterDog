//TODO: create a new class called Circle with public inheritance (inherited from Shape)
//don't forget to implement a constructor in the class
//there is a compile error when you try to run the program
//fix the problem
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    Circle cr("Fox");
    cout << "The cricle's name is " << cr.getName() << endl;

    return 0;
}
