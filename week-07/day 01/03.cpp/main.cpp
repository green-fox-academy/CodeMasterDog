#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throws a built-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

int main()
{
    try
    {
        int a = 20;
        int b = 0;

        if (b == 0)
            throw runtime_error ("Can't divide by zero.");

        int c = a / b;
    cout << a << "/" << b << " = " << c << endl;

    }
    catch (runtime_error  &err)
    {
        cout << "Run-time error occurred: " << err.what() << endl;
    }

	return 0;
}
