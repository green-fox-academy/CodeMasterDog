#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
 */

int main()
{

    int nums[5];
    int rand_num;
    srand(time(NULL));
    int a =1;

    for(int i = 0; i < 10; i++) {
        if (i < 5) {
            rand_num = rand() % 100;
            nums[i] = rand_num;
            printf("|%d| ", nums[i]);
        }
        if (i == 5)
            printf("\n");
        if (i >= 5) {

        printf("|%d| ", nums[i-a]);
        a = a + 2;
        }
    }

    /*printf("\n");

    for(int i = 5; i > 0; i--) { */

  //  }

    return 0;
}
