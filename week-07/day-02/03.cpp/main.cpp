#include <iostream>

using namespace std;

float FunctionCalledTheSame(float, float);
int FunctionCalledTheSame(int, int);
// Now, create 2 functions. They should bear the same name.
// These functions should multiple their parameters.
// The first should return float and take two arguments of the type float.
// The second function should return int and take two arguments of integer type.
// Use these two functions and print out the results.
//
// Compile the code You wrote. Note the output of the compiler. Think about it, google it.
// Now, put one of the functions into comment. (So it's still legible but won't compile.)
// Try compiling it again, and watch what the results are.
//
// Switch the two function declarations. Comment the one You commented out and comment out the one
// that ran before. Compile it and compare the results again.
//
// What did You learn from this exercise?
// Write it down in a comment into Your file!
int main()
{
    float a = 3.66;
    float b = 8.16;
    int c = 3;
    int d = 8;

    cout << "a * b = " << FunctionCalledTheSame(a, b) << endl;
    cout << "c * d = " << FunctionCalledTheSame(c, d) << endl;

    return 0;
}

float FunctionCalledTheSame(float var_a, float var_b)
{
    return var_a * var_b;
}

int FunctionCalledTheSame(int var_a, int var_b)
{
    return var_a * var_b;
}

