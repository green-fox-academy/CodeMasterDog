#ifndef SHAPE_H
#define SHAPE_H
#define PI 3.14159

class Shape {

    public:
        double virtual calc_area() = 0;
        void print_result(double);
};

#endif // SHAPE_H
