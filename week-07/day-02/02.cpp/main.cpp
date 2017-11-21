#include <iostream>
#include <string>

using namespace std;
// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.
string TakeStrings(string, string);
string TakeStrings(string, string, string);
string TakeStrings(string, string, string, string);
int main()
{
    cout << TakeStrings("This ", "is ") << endl;
    cout << TakeStrings("This ", "is ", "my ") << endl;
    cout << TakeStrings("This ", "is ", "my ", "example.") << endl;

	return 0;
}

string TakeStrings(string var_1, string var_2)
{
    return var_1 + var_2;
}

string TakeStrings(string var_1, string var_2, string var_3)
{
    return var_1 + var_2 + var_3;
}

string TakeStrings(string var_1, string var_2, string var_3, string var_4)
{
    return var_1 + var_2 + var_3+ var_4;
}
