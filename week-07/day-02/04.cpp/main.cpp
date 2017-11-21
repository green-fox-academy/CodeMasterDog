#include <iostream>
#include "Integer.h"

using namespace std;
// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.
int main()
{

    Integer int_01(5);
    cout <<"int_01.int_one is: " << int_01.PrintVariavle() << endl;

    int_01.add(5);
    cout <<"int_01.int_one is: " << int_01.PrintVariavle() << endl;

    int_01.add(5, 5);
    cout <<"int_01.int_one is: " << int_01.PrintVariavle() << endl;

    int_01.add(5, 5, 5);
    cout <<"int_01.int_one is: " << int_01.PrintVariavle() << endl;

    int_01.add(5, 5, 5, -5);
    cout <<"int_01.int_one is: " << int_01.PrintVariavle() << endl;

    return 0;
}
