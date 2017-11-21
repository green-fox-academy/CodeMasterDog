#include <iostream>
#include "Integer.h"

using namespace std;

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.
//
// Write code which uses them both and Prints out the results respectively.

int main()
{
    int  var = 20;
    int *ip;
    ip = &var;

    Integer obj_02(6);
    obj_02.add_task6(*ip);
    cout <<"obj_02.int_one is: " << obj_02.PrintVariavle() << endl;

    obj_02.add();
    cout <<"obj_02.int_one is: " << obj_02.PrintVariavle() << endl;

	return 0;
}
