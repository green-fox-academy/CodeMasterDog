#include <iostream>
#include <string>
#include <vector>
using namespace std;
//create an integer vector with the size of 5 and print the 3rd element of it
int main()
{
    vector<int> my_vector;

    my_vector.push_back(77);
    my_vector.push_back(69);
    my_vector.push_back(5);
    my_vector.push_back(4);
    my_vector.push_back(6);

    cout << "The vector's 3rd element is: "<<  my_vector[2] ;

  return 0;
}
