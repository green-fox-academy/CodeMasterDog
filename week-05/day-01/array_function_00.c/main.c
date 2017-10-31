#include <stdio.h>
#include <stdlib.h>
/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in         order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */
int takes_ints(unsigned int *, int);

int main()
{
    int lenght = 0;

    unsigned array[] = {1, 77, 88, 8, 13, 41, 26};
    lenght = sizeof(array) / sizeof(array[0]);
    takes_ints(array, lenght);

    return 0;
}

int takes_ints(unsigned int *var, int ln)
{
    int tmp = 0;
    printf("original order:\t");
    for(int i = 0; i < ln; i++) {
        printf("%d, ", var[i]);
}
    printf("\n");

    for(int i = 0; i < ln; i++) {
        for(int j = 0; j < ln - i - 1; j++) {
            if (var[j] > var[j + 1]) {
                tmp = var[j];
                var[j] = var[j + 1];
                var[j + 1] = tmp;
                tmp = 0;
            }
        }
    }

    printf("sorted order:\t");
    for(int i = 0; i < ln; i++) {
        printf("%d, ", var[i]);
    }
}


