#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"

using namespace std;

int main()
{
	Square a = Square(6, 6);
	cout << "I'm a " << a.getName() << " and I'm " << a.getArea() << " big." << endl;

	a.setWidth(2.0);
	cout << "I'm a " << a.getName() << " and I'm " << a.getArea() << " big." << endl;
	a.setHeight(3.0);
	cout << "I'm a " << a.getName() << " and I'm " << a.getArea() << " big." << endl;

	return 0;
}
