#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10
    vector <int> int_vector(10);

    srand(time(NULL));

    for (int i = 0; i < int_vector.size(); ++i) {
        int_vector.at(i) = (rand() % 10 + 1);
        cout << int_vector[i] << " ,";
    }
  return 0;
}
