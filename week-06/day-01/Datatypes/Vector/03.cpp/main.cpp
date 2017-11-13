//create a vector of integers with the size of 20
//fill this vector with random numbers from 0 to 10
//print the items of the vector
//remove the even numbers, then print the items again
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>



using namespace std;

int main()
 {
    vector <int> int_vector(20);

    for (int i = 0; i < int_vector.size(); ++i) {
            int_vector.at(i) = (rand() % 10 + 1);
            cout << int_vector[i] << " ,";
    }

    cout << endl << "--------------------------------------------------------------" << endl;

    for (int i = 0; i < int_vector.size(); ++i) {
        if (int_vector[i] % 2 == 0)
            cout << int_vector[i] << "\tis an even number" << endl;
    }

     for (int i = 0; i < int_vector.size(); ++i) {
        if (int_vector[i] % 2 == 0) {
            int_vector.erase(int_vector.begin() + i);
            i--;
        }
    }

    cout << "--------------------------------------------------------------" << endl << "After removing the even numbers: ";

    for (int i = 0; i < int_vector.size(); ++i) {
    cout << int_vector[i] << " ,";
    }

    cout << endl;

    return 0;
}
