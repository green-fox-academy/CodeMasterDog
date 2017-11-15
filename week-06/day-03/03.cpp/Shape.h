#ifndef SHAPE_H
#define SHAPE_H
#define PI 3.14159


class Shape {

    public:
        double virtual calc_area() = 0;
        float how_much_to_paint(double, int);
    private:
        float cost_of_paint;
};

#endif // SHAPE_H
