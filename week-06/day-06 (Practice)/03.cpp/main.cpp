//TODO: create a new class called Circle with public inheritance (inherited from Shape)
//don't forget to implement a constructor in the class
//there is a compile error when you try to run the program
//fix the problem

//TODO: extend your class with a setName() function with public inheritance
//don't forget to implement a constructor in the class
//then create an instance of the Rectangle class in main function and call its inherited getName function
//finally give a new name for the initialized class by calling your setName function
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Circle cr("Fox");
    cout << "The cricle's name is " << cr.getName() << endl;
    cout << "...calling set name method..." << endl;
    cr.setName("Foxy");
    cout << "The cricle's new name is " << cr.getName() << endl;
    cout << endl;
    Rectangle rec("Bob");
    cout << "The rectangle's name is " << rec.getName() << endl;
    cout << "...calling set name method..." << endl;
    rec.setName("Boby");
    cout << "The rectangle's new name is " << rec.getName() << endl;

    return 0;
}
