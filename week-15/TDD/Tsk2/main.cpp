#include <iostream>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

// Task 2 Create a function which takes an integer as a parameter and returns true if that number is prime and false if it is not.
using namespace std;

bool IsItPrime(int MyNumber) {
    if (MyNumber < 2)
        return false;

    for (unsigned int i = 2; i < MyNumber; i++) {
        if(MyNumber % i == 0)
            return false;
    }
    return true;
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
