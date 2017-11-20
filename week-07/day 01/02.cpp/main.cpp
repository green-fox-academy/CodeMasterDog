#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main()
{
    try
    {
        int a = 20;
        int b = 0;

        if (b == 0)
            throw 'q';

        int c = a / b;
    cout << a <<"/" <<b << " = " << c << endl;

    }
    catch (char x)
    {
        cout << "Error char is: " << x << ". Can't divide by zero." << endl;
    }

	return 0;
}
