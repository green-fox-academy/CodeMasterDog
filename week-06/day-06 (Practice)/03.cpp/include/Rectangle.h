#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <Shape.h>

class Rectangle : public Shape
{
    public:
        Rectangle(string name);
        virtual ~Rectangle();
        Rectangle(const Rectangle& other);

    protected:

    private:
};

#endif // RECTANGLE_H
