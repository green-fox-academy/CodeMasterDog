#include <iostream>
#include <string>
#include <vector>
//create an integer vector with the size of 5 and print all elements of it
using namespace std;

int main()
{
    vector<int> my_vector;

    my_vector.push_back(77);
    my_vector.push_back(69);
    my_vector.push_back(5);
    my_vector.push_back(4);
    my_vector.push_back(6);

    for (int i = 0; i < my_vector.size(); ++i) {
        cout <<  my_vector[i] << ", ";
    }

    return 0;
}
