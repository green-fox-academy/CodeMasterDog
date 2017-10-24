#include <stdio.h>
    //08.c
    //TODO:
    // Please fix the problem and swap the value of the variables,
    // without using the "high_number" and the "low_number" variables.

int main() {
    int high_number = 2;
    int low_number = 6655;

    int* hight_number_pointer = &high_number;
    int* low_number_pointer = &low_number;
    int* tmp = hight_number_pointer;
    
    hight_number_pointer = low_number_pointer;
    hight_number_pointer = tmp;
    printf("the value of the hight_number_pointer: %d\n", *hight_number_pointer);
    printf("the value of the low_number_pointer: %d\n", *low_number_pointer);

    return 0;
}
