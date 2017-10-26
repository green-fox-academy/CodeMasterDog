#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
    int x;
    int y;
} point_t;

point_t constructs_a_point(int, int);
double takes_2_Points(point_t *, point_t *);

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them

int main()
{
    point_t st00, st01;
    int a, b, c, d;
    printf("Give me: X1 Y1 X2 Y2 (separated with space)\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    st00 = constructs_a_point(a, b);
    st01 = constructs_a_point(c, d);
    takes_2_Points(&st00, &st01);
    //printf("st00.x: %d st00.y: %d\n", st00.x, st00.y);
    //printf("st01.x: %d st01.y: %d\n", st01.x, st01.y);
    printf("The  distance is between the two points: %f unit(s)\n", takes_2_Points(&st00, &st01));
    return 0;
}

point_t constructs_a_point(int var_a, int var_b)
{
    point_t stxx = {var_a, var_b};
    return stxx;
}

double takes_2_Points(point_t *var1, point_t *var2)
{
    int x1 = var1->x;
    int x2 = var2->x;
    int y1 = var1->y;
    int y2 = var2->y;
    double distance = 0;

    distance = sqrt(pow((var2->x-var1->x), 2) + pow((var2->y-var1->y), 2));

    return distance;
}
