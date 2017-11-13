/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */
#include <iostream>

using namespace std;


int main()
{
    int *n = NULL;
    int *sum = NULL;
    n = new int;
    sum = new int;
    *sum = 0;

    cout << "How many number do you want to enter?" << endl;
    cin >> *n;

    for (int i = 0; i < *n ; i++) {
        cout << endl << "enter the " << i + 1 << "th number." << endl;
        int tmp;
        cin >> tmp;
        *sum = *sum + tmp;
        //cout << *sum << endl;
    }

    cout << endl << "The avg pf the numbers: " << (float)*sum / *n << endl;

    delete n, sum;

    return 0;
}
