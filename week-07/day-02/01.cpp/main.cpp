#include <iostream>

using namespace std;
// create a function that adds two integers.
// Create an other function of the same name that takes 3 integers and returns the result of adding these 3 integers.
// Write code that uses both after one an other and prints out the results in a new line each.
// For input use 1 and 2, then 1, 2 and 3.
int addintegers(int, int);
int addintegers(int, int, int);

int main()
{
     int a = 1;
     int b = 2;
     int c = 3;

     cout << "a + b = " << addintegers(a, b) << endl;
     cout << "a + b +c = " << addintegers(a, b, c) << endl;

	return 0;
}

int addintegers(int var_1, int var_2)
{
    return var_1 + var_2;
}

int addintegers(int var_1, int var_2, int var_3)
{
    return var_1 + var_2 + var_3;
}
