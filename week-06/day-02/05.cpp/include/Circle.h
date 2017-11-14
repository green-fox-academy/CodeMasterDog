#ifndef CIRCLE_H
#define CIRCLE_H
#define PI 3.14159

class Circle
{
    public:
        Circle(float radius);
        float get_area();
        float get_circumference();
        void print_fn(float var);
        virtual ~Circle();

    protected:

    private:
        float radius;
};

#endif // CIRCLE_H
