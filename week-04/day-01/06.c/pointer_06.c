#include <stdio.h>

int main() {
    //06.c
    //TODO:
    // The "other_high_number_pointer" should point to the same memory address
    // without using the "&" operator.

    int high_number = 6655;
    int low_number = 2;

    int* hight_number_pointer = &high_number;
    int* other_high_number_pointer = hight_number_pointer;
    printf("Address of the other_high_number_pointer is: %p\n", other_high_number_pointer);

    return 0;
}
