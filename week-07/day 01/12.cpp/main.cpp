#include <iostream>
#include <string>
using namespace std;

int throwingFunction(int) throw (int, char const*);
// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.


main()
{
    const char* sentence[6] = {"What", "a", "pleasant", "surprie", "this", "is."};

    try {
    for (int i = 0; i <= throwingFunction(-8); i++) {
        cout << sentence[i] << " ";
    }
    }
    catch(int x) {
        cout << "The parameter is " << x  << " more bigger." << endl;}
    catch(char const* str) {
        cout << "The exception's type is string: " << str << endl;}
    return 0;
}

int throwingFunction(int n) throw (int, char const*)
{
    if (n > 5)
        throw n - 5;
    if (n < 0)
        throw "The parameter is negative.";

    return n;
}

