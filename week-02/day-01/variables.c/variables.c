#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
long int number;
static int counter = 0;
//multiplication_with_three();
/*
variables.c
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/

int main()
    {
    scan_num();
    printf("\nThe number is %d", number);
    printf("\nThe number *3 = %d", multiplication_with_three());
    printf("\nThe number /5 = %d", divided_by_five());
    printf("\nThe number +7 = %d", number_plus_7());
    printf("\nThe number ^2 = %d\n", pow_2());
    printf("\nThe counter's value: %d\n", counter);
    return 0;
    }

int multiplication_with_three()
{
    counter++;
    return number*3;
}

int divided_by_five()
{
    counter++;
    return number/5;
}

int number_plus_7()
{
    counter++;
    return number+7;
}

int pow_2()
{
    counter++;
    return pow(number,2);
}

int scan_num()
{
    printf("Please enter a number\n");
    scanf("%d", &number);
    return number;
}
