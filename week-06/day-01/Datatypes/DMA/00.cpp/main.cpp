// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentense using these variables
// free the allocated memory
#include <iostream>
using namespace std;
/*
int *p = NULL;
p = new int;

*p = 10;

delete p;
*/

int main()
{
    string *name_p = NULL;
    int *slice_of_pizza_p = NULL;
    int *age_p = NULL;

    name_p = new string;
    age_p = new int;
    slice_of_pizza_p = new int;

    *name_p = "Laci";
    *age_p = 35;
    *slice_of_pizza_p = 4;

    cout << *name_p << " is " << *age_p << " years old, and he can eat " << *slice_of_pizza_p <<" slice of pizza." << endl;

    delete name_p, age_p, slice_of_pizza_p;

    return 0;
}
