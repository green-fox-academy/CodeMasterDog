/*     Task01: Create a function which takes an array of integer as a parameter and returns the sum of the elements.
 *     Task02: Create a function which takes an integer as a parameter and returns true if that number is prime and false if it is not.
 *     Task03: Create a function which takes a string as a parameter and returns the lenght of it.
 *     Task04: Create Animal class
 *                 Every animal has a hunger value, which is a whole number
 *                 Every animal has a thirst value, which is a whole number
 *                 when creating a new animal object these values are created with the default 50 value
 *                 Every animal can eat() which decreases their hunger by one
 *                 Every animal can drink() which decreases their thirst by one
 *                 Every animal can play() which increases both by one
 */
#include <iostream>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

int Factorial( int number ) {
    return number <= 1 ? 1 : Factorial( number - 1 ) * number;
}

int SumOfElements(int testArray[], int numOfElements) {
    int sum = 0;
    for (unsigned int i = 0; i < numOfElements ; i++) {
        sum += testArray[i];
    }
        return sum;
}

bool IsItPrime(int MyNumber) {
    if (MyNumber < 2)
        return false;

    for (unsigned int i = 2; i < MyNumber; ++i) {
        if(MyNumber % i == 0)
            return false;
    }
    return true;
}

//I could include string and use .length, but writing my own strlen function is much more fun...
unsigned int LenghtOfString(string str)
{
    unsigned int len = 0;

    while (str[len] != '\0') {
        len++;
  }
    return  len;
}

class Animal {
        public:
            Animal() {
               hunger = 50;
               thirst = 50;
            }

            unsigned int GetHunger() {
                return hunger;
            }

            unsigned int GetThirst() {
                return thirst;
            }

            void eat() {
                hunger--;
            }

            void drink() {
                thirst--;
            }

            void play() {
               hunger++;
               thirst++;
            }

        private:
            unsigned int hunger;
            unsigned int thirst;
};

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE("Calculate the Sum of the Array Elements", "[Sum]") {
    int testArray[] = {1, 2, 3, 4, 5, 6, 7, 8};

    REQUIRE( SumOfElements(testArray, 1) == 1);
    REQUIRE( SumOfElements(testArray, 2) == 3);
    REQUIRE( SumOfElements(testArray, 3) == 6);
    REQUIRE( SumOfElements(testArray, 4) == 10);
    REQUIRE( SumOfElements(testArray, 5) == 15);
    REQUIRE( SumOfElements(testArray, 6) == 21);
    REQUIRE( SumOfElements(testArray, 7) == 28);
    REQUIRE( SumOfElements(testArray, 8) == 36);
}

TEST_CASE("Prime Test", "[IsItPrime]") {
    REQUIRE( IsItPrime(0) == false);
    REQUIRE( IsItPrime(1) == false);
    REQUIRE( IsItPrime(2) == true);
    REQUIRE( IsItPrime(3) == true);
    REQUIRE( IsItPrime(4) == false);
    REQUIRE( IsItPrime(5) == true);
    REQUIRE( IsItPrime(6) == false);
    REQUIRE( IsItPrime(7) == true);
    REQUIRE( IsItPrime(8) == false);
    REQUIRE( IsItPrime(9) == false);
    REQUIRE( IsItPrime(10) == false);
    REQUIRE( IsItPrime(11) == true);
    REQUIRE( IsItPrime(12) == false);
    REQUIRE( IsItPrime(13) == true);
    REQUIRE( IsItPrime(14) == false);
    REQUIRE( IsItPrime(15) == false);
    REQUIRE( IsItPrime(16) == false);
    REQUIRE( IsItPrime(17) == true);
}

TEST_CASE( "Return length of string", "[LenghtOfString]" ) {
    REQUIRE( LenghtOfString("123456") == 6);
    REQUIRE( LenghtOfString("1234567") == 7);
    REQUIRE( LenghtOfString("12345678") == 8);
    REQUIRE( LenghtOfString("Yoda said this string is long 32") == 32);
}

TEST_CASE( "Testing Animal Class") {
    Animal dog;
    CHECK(dog.GetHunger() == 50);
    CHECK(dog.GetThirst() == 50);
    dog.eat();
    REQUIRE( dog.GetHunger() == 49);
    dog.drink();
    REQUIRE ( dog.GetThirst() == 49);
    dog.play();
    CHECK(dog.GetHunger() == 50);
    CHECK(dog.GetThirst() == 50);
}
