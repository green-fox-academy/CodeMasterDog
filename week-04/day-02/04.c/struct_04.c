#include <stdio.h>


typedef struct rectangular_cuboid {
    double a;
    double b;
    double c;
}DIMENSION;

// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

double getSurface(DIMENSION *);
double getVolume(DIMENSION *);

DIMENSION get_dimensions(double, double, double);

int main()
{
    double dl = 0;
    double dw = 0;
    double dh = 0;

    puts("please enter the dimensions of the cuboid. (separated with space)");
    scanf("%lf" "%lf" "%lf", &dl, &dw, &dh);
    DIMENSION cuboid = get_dimensions(dl, dw, dh);
    printf("The surface is : %.2f unit(s)\n", getSurface(&cuboid));
    printf("The volume is : %.2f unit(s)\n", getVolume(&cuboid));
    return 0;
}

double getSurface(DIMENSION * var)
{
    double surface = 0;
    double var_l = var->a;
    double var_w = var->b;
    double var_h = var->c;

    surface = 2*(var_l*var_w)+2*(var_h*var_l)+2*(var_h*var_w);

    return surface;
}

double getVolume(DIMENSION * var)
{
    double volume = 0;
    double var_l = var->a;
    double var_w = var->b;
    double var_h = var->c;

    volume = var->a*var->b*var->c;

    return volume;
}

DIMENSION get_dimensions(double var1, double var2, double var3)
{
    DIMENSION proto = {var1, var2, var3};

    return proto;
}
