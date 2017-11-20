#include <iostream>
#include <stdexcept>

using namespace std;

void mpl_table(int) throw (runtime_error);
/**
 * Create a function that prints a multiplication table with a given base number.
 * It should take the base number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 *
 *  If the function gets invalid parameter
 *  Negative numbers are invalid parameters.
 *  It should throw an exceptions
 */

int main() {

    try
    {
        mpl_table(-1);
    }
    catch (runtime_error &err)
    {
        cout << "Run-time error: " << err.what() << endl;
    }

    return 0;
}

void mpl_table(int base) throw (runtime_error)
{
    if (base < 0)
        throw runtime_error("invalid parameter");

    for (int i = 1; i <= 10; ++i) {
        cout << i << " * " << base << " = " << i * base << endl;
    }
}
