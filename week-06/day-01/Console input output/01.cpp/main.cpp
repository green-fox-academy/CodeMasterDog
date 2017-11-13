#include <iostream>

using namespace std;

// Greet 3 of your classmates with this program, in three separate lines
// like:
//
// Hello, Esther!
// Hello, Mary!
// Hello, Joe!
// Store their names in separate string type variables


int main()
{
    string hi = "Hello, ";
    string name_1 = "Esther";
    string name_2 = "Mary";
    string name_3 = "Joe";
    char exclamation_mark = '!';

    cout << hi + name_1 + exclamation_mark <<  endl;
    cout << hi + name_2 + exclamation_mark <<  endl;
    cout << hi + name_3 + exclamation_mark <<  endl;


    return 0;
}
