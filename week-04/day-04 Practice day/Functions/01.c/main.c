#include <stdio.h>
#include <stdlib.h>
//fill abc string from a to z, print out
int sum(); //function declaration

int main()
{
    printf("The sum is: %d", sum());

    return 0;
}

int sum() // function definition
{
    int a = 10000;
    int b = 20000;

    return  a + b;
}
