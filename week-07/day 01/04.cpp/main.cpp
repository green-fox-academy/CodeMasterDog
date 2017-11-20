#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

float divide(int, int) throw (int);


int main()
{
    try
    {
        int a = 20;
        int b = 0;

        cout << divide(a, b) << endl;
    }
    catch (int x)
    {
        cout << "Error occurred, caught an integer: " << x<<  endl;
    }

	return 0;
}


float divide(int a, int b) throw (int)
{
    if (b == 0)
        throw -1;

    return a / b;
}
