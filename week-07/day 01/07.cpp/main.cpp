#include <iostream>
#include <stdexcept>

using namespace std;
//Try to run the following code!
//The program should compile but crash!
//Create a solution for this problem using try-catch block!
// cout << int_array[200];

void printArray(int [], int , int) throw (runtime_error);

int main () {

try{
    int int_array[5] = {1, 2, 3, 4, 5};
    int n = 200;
    int lenght = sizeof(int_array) / sizeof(int_array[lenght]);

    printArray(int_array, n, lenght);
    return 0;
    }
    catch (runtime_error &err)
    {
        cout << "Caught a run-time error: " << err.what() << endl;
    }
}

void printArray(int var[], int x, int len) throw (runtime_error)
{

    if (x > len || x < 0)
        throw runtime_error("Index is out of range.");

    cout << "|"<<var[x] <<"|" << endl;
}



