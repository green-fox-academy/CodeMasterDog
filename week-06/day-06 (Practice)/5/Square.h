#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Square: public Shape {
    protected:
        virtual void calculateArea();
    public:
        Square(float _w, float _h);
        virtual string getName();
        virtual ~Square();
};

#endif // SQUARE_H
