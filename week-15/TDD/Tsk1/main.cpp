#include <iostream>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;
//Create a function which takes an array of integer as a parameter and returns the sum of the elements.

int SumOfElements(int testArray[], int numOfElements) {
    int sum = 0;
    for (unsigned int i = 0; i < numOfElements ; i++) {
        sum += testArray[i];
    }
        return sum;
}

TEST_CASE("Calculate the Sum of the Array Elements", "[Sum]"){

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
