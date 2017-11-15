#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <string>
#include <iostream>

using namespace std;
class Circle: public Shape {

    public:
        Circle(double);
        double calc_area();
        void print_var();

    private:
        float radius;
        float result;
};

#endif // CIRCLE_H
