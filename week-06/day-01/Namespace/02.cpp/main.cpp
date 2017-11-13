#include <iostream>
using namespace std;

namespace Person {
    string name = "Laszlo Kovacs";
    int age = 35;
    int fav_num = 1000;
}

using namespace Person;
// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

int main()
{
    cout << name << endl;
    cout << age << endl;
    cout << fav_num << endl;

    return 0;
}
