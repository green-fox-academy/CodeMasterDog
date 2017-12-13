#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

int main()
{
    Animal dog;
    dog.getter();
    dog.drink();
    dog.eat();
    dog.getter();
    dog.play();
    dog.getter();

    return 0;
}
//Create Animal class
//Every animal has a hunger value, which is a whole number
//Every animal has a thirst value, which is a whole number
//when creating a new animal object these values are created with the default 50 value
//Every animal can eat() which decreases their hunger by one
//Every animal can drink() which decreases their thirst by one
//Every animal can play() which increases both by one
