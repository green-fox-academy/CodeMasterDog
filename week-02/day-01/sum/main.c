#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

int sum();
// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int main()
{
    printf("The sum of the numbers= %d", sum());
    return 0;
}

int sum(){
    return nr1+nr2+nr3+nr4;
}