
#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int a = 0;
    int b = 0;
    int temp1 = 0;
    int temp2 = 0;
    printf("please enter the first number: ");
    scanf("%d", &a);
    printf("please enter the secound number: ");
    scanf("%d", &b);

    if (a>b){
        temp1=a;
        temp2=b;
        a=temp2;
        b=temp1;
    }

    switch (a%2){
        case 0:
        printf("\n\nThe odd numbers between %d and %d:\n\n", a, b);
        for (int i=a+1; i<b; i=i+2){
            printf("%d, ",i);
            }
        printf("\n");
        break;

        default:
        printf("\n\nThe odd numbers between %d and %d:\n\n", a, b);
        for (int i=a+2; i<b; i=i+2){
            printf("%d, ",i);
            }
        printf("\n");
        break;
    }
    	return 0;
}
