#include <stdio.h>
#include <stdlib.h>
/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */
int takes_ints(unsigned int *, int);

int main()
{
    int lenght = 0;

    unsigned array[3] = {1, 77, 88};
    lenght = sizeof(array)/sizeof(array[0]);

    takes_ints(array, lenght);

    return 0;
}

int takes_ints(unsigned int *var, int ln)
{
    for(int i = 0; i < ln; i++) {
        printf("%d ", var[i]);
}

}
