#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */
int main()
{
   int nums[12];
   int rand_num;
   int tmp = 0;
   int ln = sizeof(nums) / sizeof(nums[0]);

   srand(time(NULL));
    // fill and print
    printf("size of num: %d\n", ln);
    printf("\nArray: ");
    for(int i = 0; i < ln; i++) {
        rand_num = rand() % 300+100;
        nums[i] = rand_num;
        printf("|%d| ", nums[i]);
    }
    //sort
    for(int i = 0; i < ln; i++) {
        for(int a = 0; a < ln - i - 1; a++) {
            if ( nums[a] > nums[a+1]) {
                tmp = nums[a];
                nums[a] = nums[a+1];
                nums[a+1] = tmp;
                tmp = 0;
            }
        }

    }
    //print sorted
    printf("\nArray: ");

        for(int i = 0; i < ln; i++) {
            printf("|%d| ", nums[i]);
        }

    return 0;
}
