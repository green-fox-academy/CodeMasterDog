#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    public:
        Circle(float radius);
        float get_area();
        float get_circumference();
        void print_c();
        virtual ~Circle();

    protected:

    private:
        float radius;
};

#endif // CIRCLE_H
