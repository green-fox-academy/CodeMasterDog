#include <iostream>
#include "Integer.h"


using namespace std;

// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member varibale to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)


int main()
{

    Integer int_01(5);
    cout <<"int_01.int_one is: " << int_01.PrintVariavle() << endl;

    Integer int_02(int_01, 2);
    cout <<"int_02.int_one is: " << int_02.PrintVariavle() << endl;

    Integer int_03;
    cout <<"int_03.int_one is: " << int_03.PrintVariavle() << endl;

    return 0;
}
