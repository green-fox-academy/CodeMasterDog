#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main()
{
	int x, y;
	x = 5;
	y = 8;
    printf("Before Swapping\nx = %d\ny = %d\n", x, y);
    swap(&x, &y);
    printf("after Swapping\nx = %d\ny = %d\n", x, y);
	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.

	return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    }
