#include <stdio.h>
// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
typedef struct {
    char address[255];
    int price;
    float number_of_rooms;
    int area;
} house_t;

int worth_to_buy(house_t *, int);
int how_many_house_to_buy(house_t [], int, int);

int main()
{

    int market_price = 400;
    house_t h0 = {"Frank street", 49890, 3.5, 80};
    house_t h1 = {"Long Road Road", 121, 4, 120};
    house_t h2 = {"High bay", 19999, 2, 50};
    house_t h3 = {"Racer street", 10640000, 4, 110};
    house_t houses[] = {h0, h1, h2, h3};
    int lenght = sizeof(houses) / sizeof(houses[0]);

    printf("%d house(s) worth to buy.\n", how_many_house_to_buy(houses, market_price, lenght));


    return 0;
}

int  worth_to_buy(house_t *var,  int mp)
{
    float result = var->price / var->area;

    if (result < mp)
        return 1;
    else
        return -1;
}

int how_many_house_to_buy(house_t var[], int mp, int len)
{
    int counter = 0;

    for (int i = 0; i < len; i++) {
        if (worth_to_buy(&var[i], mp) == 1)
            counter++;
    }
    return counter;
}
