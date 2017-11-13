#include <iostream>
using namespace std;
// Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
// Please delete the array before the program exits
int main()
 {
    int* pointer = NULL;
    int lenght = 5;
    pointer = new int[lenght];

    for (int i = 0; i < lenght; ++i) {
        pointer[i] = i;
    }

    for (int i = 0; i < lenght; ++i) {
        cout << pointer[i] << ", ";
    }

    delete []pointer;

    return 0;
}
