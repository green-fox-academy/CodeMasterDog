#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape {

    public:
        Triangle(double, double);
        double calc_area();

    private:
        float result;
        float a;
        float m;
};

#endif // TRIANGLE_H
