#include <iostream>
#include <stdexcept>

using namespace std;

int get_fibonacci_number(int var) throw (runtime_error);

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exception
 */

int main()
{
    try
    {
        cout << "Fib: " << get_fibonacci_number(1) << endl;
        cout << "Fib: " << get_fibonacci_number(2) << endl;
        cout << "Fib: " << get_fibonacci_number(3) << endl;
        cout << "Fib: " << get_fibonacci_number(4) << endl;
        cout << "Fib: " << get_fibonacci_number(5) << endl;
        cout << "Fib: " << get_fibonacci_number(6) << endl;
        cout << "Fib: " << get_fibonacci_number(-3) << endl;
    }
    catch (runtime_error &err)
    {
        cout << "Runtime error: " << err.what() << endl;
    }


	return 0;
}

int get_fibonacci_number(int var) throw (runtime_error)
{
    if (var <= 0)
        throw runtime_error("Invalid value");

    else if (var == 1)
        return 0;

    else if (var == 2)
        return 1;

    else if (var == 3)
        return 1;

    else {
        int a = 0;
        int b = 1;
        int c = a + b;

        for (int i = 1; i < var; ++i) {
            a = b;
            b = c;
            c = a + b;
            if (i == var - 3)
                return c;
        }
    }
}
