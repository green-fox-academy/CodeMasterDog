    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main()
{
    Car car_01("Mazda", 18721.86);
    car_01.print_car();
    car_01.run(100);
    car_01.print_car();

    return 0;
}
