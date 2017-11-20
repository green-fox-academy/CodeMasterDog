#include <iostream>
#include <stdexcept>

using namespace std;

// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

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
        cout << "Error occurred, caught an integer: " << x <<  endl;
    }

	return 0;
}


float divide(int a, int b) throw (int)
{
    if (b == 0)
        throw -1;

    return a / b;
}
