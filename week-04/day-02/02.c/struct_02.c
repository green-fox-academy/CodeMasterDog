#include <stdio.h>


enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

typedef struct Car {
  enum CarType type;
  double km;
  double gas;
}CARS;

void take_a_car(CARS var);

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main()
{
    CARS idx00 = {VOLVO, 1564, 7.3};
    CARS idx01 = {TOYOTA, 216874, 11.3};
    CARS idx02 = {LAND_ROVER, 66541, 13.65};
    CARS idx03 = {TESLA, 4321, };

    take_a_car(idx03);

  return 0;
}

void take_a_car(CARS var)
{
    if (var.type == 3)
        printf("Your car is ran: %.2f Km\n", var.km);
    else
        printf("Your car is ran: %.2f Km, Uses: %.2f l/100Km\n", var.km, var.gas);
}

