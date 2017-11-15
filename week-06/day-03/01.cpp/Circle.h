#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle: public Shape {

    public:
        Circle(double);
        double calc_area();

    private:
        float radius;
        float result;
};

#endif // CIRCLE_H
