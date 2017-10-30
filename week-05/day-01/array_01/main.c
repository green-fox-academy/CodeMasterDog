#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */

int main()
{

    int nums[5];
    int nums_2[7];
    int rand_num;

    srand(time(NULL));

    printf("nums_2[0]: %d\n", nums_2[0]);
    printf("nums_2[7]: %d\n", nums_2[7]);
    printf("Array1 is:      ");
    for(int i = 0; i < 5; i++) {
            rand_num = rand() % 100;
            nums[i] = rand_num;
            printf("|%d| ", nums[i]);
    }

    printf("\nArray2 is: ");

    for(int i = 0; i < 7; i++) {
            if ( i == 0)
                nums_2[0] = 42;
            nums_2[i+1] = nums[i];
            printf("|%d| ", nums_2[i]);
            if (i == 5)
                nums_2[6] = 42;
    }

    return 0;
}
