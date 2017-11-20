#include <iostream>
#include <stdexcept>

using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

float divide(int, int) throw (char);


int main()
{
    try
    {
        int a = 20;
        int b = 0;

        cout << divide(a, b) << endl;
    }
    catch (char x)
    {
        cout << "Error occurred, caught a char: '" << x << "'" << endl;
    }

	return 0;
}


float divide(int a, int b) throw (char)
{
    if (b == 0)
        throw 'c';

    return a / b;
}
