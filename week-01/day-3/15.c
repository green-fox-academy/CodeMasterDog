#include <stdio.h>
#include <stdlib.h>

/* 15.c
Create a program which can tell how to pay an exact amount of money
for example 45670 Ft, is the amount (store this as an integer)
and the output should be:
2-20000Ft
1-5000Ft
1-500Ft
1-100Ft
1-50Ft
1-20Ft
*/

/*
Take care of the rounding (when giving back 5 coins):
1, 2 - 0 down
3, 4 - 5 up
6, 7 - 5 down
8, 9 - 0 up
*/

int main()
{
    int amount_of_money = 0;
    int counter = 0;
    printf("Pleas enter the value of the money you want to change.:");
    scanf("%d", &amount_of_money);


    if (amount_of_money<5){
        printf("The value is less than the value of any coins\n\     (Cannot pay from the cash register)\n\n\n");
        return 0;
    }

    switch (amount_of_money%10){
        case (1):
        amount_of_money=amount_of_money-1;
        break;
        case (2):
        amount_of_money=amount_of_money-2;
        break;
        case (3):
        amount_of_money=amount_of_money+2;
        break;
        case (4):
        amount_of_money=amount_of_money+1;
        break;
        case (6):
        amount_of_money=amount_of_money-1;
        break;
        case (7):
        amount_of_money=amount_of_money-2;
        break;
        case (8):
        amount_of_money=amount_of_money+2;
        break;
        case (9):
        amount_of_money=amount_of_money+1;
        break;
        default:
        amount_of_money=amount_of_money;
    }
    printf("\n\n\n\n=====    %d    =====\n\n", amount_of_money);

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-20000;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 20 000 HUF banknote(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+20000;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-10000;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 10 000 HUF banknote(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+10000;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-5000;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 5 000 HUF banknote(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+5000;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-2000;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 2 000 HUF banknote(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+2000;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-1000;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 1 000 HUF banknote(s)\n", counter-1);
        }
    }
    amount_of_money=amount_of_money+1000;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-500;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 500 HUF banknote(s)\n", counter-1);
        }
    }
    amount_of_money=amount_of_money+500;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-200;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 200 HUF coin(s)\n", counter-1);
        }
    }
    amount_of_money=amount_of_money+200;
    counter= 0;

    while(amount_of_money>=0){
        amount_of_money = amount_of_money-100;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 100 HUF coin(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+100;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-50;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 50 HUF coin(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+50;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-20;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 20 HUF coin(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+20;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-10;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 10 HUF coin(s)\n", counter-1);
        }
    }

    amount_of_money=amount_of_money+10;
    counter= 0;

    while(amount_of_money>=0) {
        amount_of_money = amount_of_money-5;
        counter=counter+1;
        if (amount_of_money<0&&counter>1){
            printf("%d pcs of 5 HUF coin(s)\n", counter-1);
       }
    }

    return 0;
}
