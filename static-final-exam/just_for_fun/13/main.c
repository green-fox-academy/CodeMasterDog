#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int return_nearest(int *, uint8_t);
int cmp_func (const void *, const void *);

int main() {

/* 13. Create a function that takes an array of integers and returns with
 *the nearest integer in the array compared to the average of the array.
 */
    //int array[] = {2, 6, 7, 33, 7, 33, 7, 9, 11, 33, 5, 6, 8, 3, 2};
    //int array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int array[] = {2, 6, 7, 444, 7, 56, 7, 9, 11, 33, 5, 6, 8, 3, 2};
    uint8_t lenght = sizeof(array) / sizeof(int);

    printf("The nearest element to the AVG: %d \n", return_nearest(array, lenght));

    return 0;
}


int return_nearest(int var[], uint8_t len)
{
    float accu = 0;

    for (uint8_t i = 0; i < len; i++) {
        accu += var[i];
    }

    accu /= len;
    printf("The AVG of the array's elements : %.3f\n", accu);
    qsort(var, len, sizeof(int), cmp_func);

    for (uint8_t i = 0; i < len; i++) {
        if (var[i] >= accu) {
            if ((var[i] - accu) > (accu - var[i - 1])) {
                return var[i - 1];
            } else {
                return var[i];
            }
        }
    }
}

int cmp_func (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
