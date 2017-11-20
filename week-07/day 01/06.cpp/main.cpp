#include <iostream>
#include <stdexcept>

using namespace std;

// Create a function which throws a built-in exception
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

float divide(int, int) throw (runtime_error);


int main()
{
    try
    {
        int a = 20;
        int b = 0;

        cout << divide(a, b) << endl;
    }
    catch (runtime_error &err)
    {
        cout << "Error occurred, caught a run-time error: " << err.what() << endl;
    }

	return 0;
}


float divide(int a, int b) throw (runtime_error)
{
    if (b == 0)
        throw  runtime_error("Can't divide by zero.");

    return a / b;
}
