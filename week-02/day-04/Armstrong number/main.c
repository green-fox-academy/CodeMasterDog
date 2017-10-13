/*Armstrong number 2XP

An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
Let's demonstrate this for a 4-digit number: 1634 is a 4-digit number,
raise each digit to the fourth power, and add: 1^4 + 6^4 + 3^4 + 4^4 = 1634, so it is an Armstrong number.
For a 3-digit number: 153 is a 3-digit number,
raise each digit to the third power, and add: 1^3 + 5^3 + 3^3 = 153, so it is an Armstrong number.

Exercise

Write a simple program to check if a given number is an armstrong number.
The program should ask for a number. E.g. if we type 371, the program should print out: The 371 is an Armstrong number.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double  armstrong[50];
    double arm = 0;
    double  ln = 0;
    int num;
    double cant_touch_this;

    printf("Enter a number");
    scanf("%d", &num);
    system("cls");
    ln = nums_lenght(num);
    cant_touch_this = num;

    for(int i = ln-1; i>-1; i--){
        armstrong[i] = num%10;
        num = num*0.1;
        //printf("\narmstrong[%d]: %.0f",i, armstrong[i]);
    }

    for (int x = ln-1; x>-1; x--){
        //printf("\narmstrong[%d] is %.0f", x, armstrong[x]);
        double poww = pow(armstrong[x], ln);
        arm = arm + poww;
        }

    if (arm == cant_touch_this)
        printf("%.0f is an Armstrong number.\n\n", cant_touch_this);
    else
        printf("%.0f is NOT an Armstrong number.\n\n", cant_touch_this);
    return 0;
}

int nums_lenght(var)
{
    int lenght = 0;
    while (var>0){
        var = var *0.1;
        var%10;
        lenght++;
    }
    return lenght;
}
