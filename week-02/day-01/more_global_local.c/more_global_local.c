#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum_of_money();
//more_global_local.c
//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 9725;
int mark_money = 1680;
int jerry_money = 3789;

int can_they_buy_a_new_tv()
{
    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it

    int tv_price = 6950;
    if (sum_of_money()>tv_price){
        printf("\nYes, they can buy a TV. After that they still have %d$\n", sum_of_money());
        return 0;
        }
    else{
        printf("\n%d$ is still missing. :(\n", tv_price-sum_of_money());
        return 0;
        }
}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;
    int all_price = milk+chocolate+flour+egg+sugar+salt+oven_shape+cream;
    int allmoney= 6500;
    int counter = 0;
    while (sum_of_money()>=all_price&&tom_money>=all_price/3&&mark_money>=all_price/3&&jerry_money>=all_price/3){
        counter++;
        tom_money = tom_money-all_price/3;
        mark_money = mark_money-all_price/3;
        jerry_money = jerry_money-all_price/3;
    }
    printf("\nThey can buy all the ingredients %d times", counter);
    printf("\nEveryone should pay %d$ per times\n(For all the %d times: %d*%d=%d$)\n", all_price/3,counter,counter,all_price/3,counter*all_price/3);
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;
    int all_price = milk+egg+salt+ham+onion+spice;

    //printf("\nham and eggs price %d", all_price);
    if (sum_of_money()>=all_price&&tom_money>=all_price/3&&mark_money>=all_price/3&&jerry_money>=all_price/3)
        printf("\nYes, they can make ham and eggs!\nEvereyone should pay %d$\n", all_price/3);
    else
        if   (sum_of_money()<all_price)
            printf("\nThey don't have enough  money for ham and eggs\n");
        else
            printf("\nOne of them has not enough money for sharing the bill equally\n");

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}
    //is there any local or global variables we did not use well?
    //are we using functions correctly?
int sum_of_money()
{
    return tom_money+mark_money+jerry_money;
}

int main()
{
    can_they_buy_a_new_tv();
    can_they_make_a_cake();
    can_they_make_ham_and_eggs();
	return 0;
}
