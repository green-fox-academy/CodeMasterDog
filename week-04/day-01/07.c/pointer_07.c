#include <stdio.h>

int main() {
    //07.c
    //TODO:
    // Please fix the problem and swap where the pointers point,
    // without using the "&" operator.
    int high_number = 6655;
    int low_number = 2;

    int* high_number_pointer = &low_number;
    int* low_number_pointer = &high_number;
    int * tmp = high_number_pointer;
    high_number_pointer = low_number_pointer;
    low_number_pointer = tmp;
    printf("The value of the high_number_pointer is: %d\n", *high_number_pointer);
    printf("The value of the low_number_pointer is: %d\n", *low_number_pointer);


    return 0;
}
