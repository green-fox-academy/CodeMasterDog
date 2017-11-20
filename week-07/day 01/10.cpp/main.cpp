#include <iostream>
#include <stdexcept>
//#include <string>

using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */
void positiveNumbers(int) throw (string);

int main() {
    try{
    positiveNumbers(-15);

    }
    catch (string err){
        cout << err <<endl;
    }

    return 0;
}

void positiveNumbers(int n) throw (string)
{
    if (n < 1)
        throw string("Error, the given number is not positive.");

    for (int i =1; i <= n * 2; ++i) {
        if ( i % 2 != 0)
        cout << i << ", ";
    }
    cout << endl;
}
