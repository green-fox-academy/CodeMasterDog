#include <stdio.h>

void calc(int, int , int *, int *);

int main()
{
	int x, y;
	int sum, mul;

	x = 5;
	y = 8;
	//11.c
	//TODO: write a void function which calculates the sum and multiplication of x and y according to the function prototype. Use 'output parameters'. Print out these values.
    calc(x, y , &sum , &mul);
    printf("x + y = %d\n", sum);
    printf("x * y = %d\n", mul);

	return 0;
}

void calc(int a, int b, int *p_sum, int *p_mul)
{
    *p_sum = a + b;
    *p_mul = a * b;
}