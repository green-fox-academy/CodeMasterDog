// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

#include <iostream>
using namespace std;

namespace Mark {
    string name = "Mark";
    int age = 35;
    int fav_num = 1000;
}

namespace Maria {
    string name = "Maria";
    int age = 30;
    int fav_num = 2000;
}

int add_ages(int, int);
int main()
{
    cout << "Sum of the two ages: " << add_ages(Mark :: age, Maria :: age) << endl;
    return 0;
}

int add_ages(int var1, int var2)
{
    return var1 + var2;
}
