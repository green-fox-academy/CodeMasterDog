#include <stdio.h>
#include <stdlib.h>
int takes_ints(int *, int);
int* searc_index(int *, int, int);
/*
 * array_function-01.c
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unosrted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */
int main()
{
    int lenght = 0;
    int find_number;
    int array[] = {1, 77, 19, 528, 28, 411, 29};

    lenght = sizeof(array) / sizeof(array[0]);
    printf("original order:\t");

    for(int i = 0; i < lenght; i++) {
        printf("%d, ", array[i]);
    }

    takes_ints(array, lenght);

    printf("\nsorted order:\t");

    for(int i = 0; i < lenght; i++) {
        printf("%d, ", array[i]);
    }

    printf("\nwhich number do you want to find?\n");
    scanf("%d", &find_number);
    if (searc_index(array, lenght, find_number) != -1)
        printf("array[%d] is the searched number (%d)\n", searc_index(array, lenght, find_number), find_number);
    else
        printf("The searched number is not the array's element\n");

    return 0;
}

int takes_ints(int *var, int ln)
{
    int tmp = 0;

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
}

int* searc_index(int *var, int ln, int find)
{
    int idx = 0;
    for(int i = 0; i < ln; i++) {
        if (var[i] == find){
        //printf("\nGot you!\n");
        idx = i;
        return idx;
        }
    }
    return -1;
}

