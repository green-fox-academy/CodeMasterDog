#include <stdio.h>
#include <stdlib.h>
#include "parameters.h"

// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file

void printer();

int main()
{
    printer();
    return 0;
}

void printer(){
    printf("%d\n", parameter1);
    printf("%s\n", parameter2);
    printf("%s\n", parameter3);
    printf("%s\n", parameter4);
    printf("%s\n", parameter5);
    printf("%s\n", parameter6);
}
