#include "Shape.h"

// Create a constructor that takes the height and width as it's parameters.
Shape::Shape(float _w, float _h)
{
    mWidth = _w;
	mHeight = _h;
}

// Create a destructor, that destructs the objects.
~Shape()
{
    cout << "Now I'm destructing the object" << endl;
}

Shape::getArea()
{

}
//Implement getter and setter functions.
//When implementing setters, make sure you call calculateArea function
//because it is a 'helper function' and can not be called from outside

//in other words you can only call it inside the other methods of the class

//don't implement calculateArea() andgetName() functions. These are pure virtual
//in other words they are meant to be implemented in child classes

