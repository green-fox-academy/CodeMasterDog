#include <stdio.h>

int main() {
    int number = 1234;
    int* number_pointer = &number;
    //03.c
    //TODO:
    // update the value of number variable to 42 using the "number_pointer"
    *number_pointer = 42;
    printf("The value of the variable changed to: %d\n", *number_pointer);

    return 0;
}
