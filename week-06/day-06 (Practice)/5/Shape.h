#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

using namespace std;

class Shape {
	private:
        float mWidth;
		float mHeight;
	protected:
	    float mArea; // Add a variable called mArea to the Shape class. Make it "protected".
        //in order to be able to reach this from the virtual functions for calcuateArea()

        calcuateArea()
        //Create a function called calcuateArea() that calculates the areas of the shape.
        //calculateArea should not be callable from outside
	public:
		Shape(float _w, float _h);
		void setWidth(float _width);
		void setHeight(float _height);
		float getWidth();
		float getHeight();
		float getArea();
		virtual string getName()=0;
		virtual ~Shape(); //This is virtual, so the child classes can override this and create their own destructors.
 };

#endif // SHAPE_H
