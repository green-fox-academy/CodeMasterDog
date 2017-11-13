// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born
#include <iostream>
using namespace std;

namespace Person {
    string name = "Laszlo Kovacs";
    int age = 35;
    int fav_num = 1000;
}

int year_of_born(int);

int main()
{
    using namespace Person;
    cout << "I was born in " << year_of_born(age) << endl;

    return 0;
}

int year_of_born(int var)
{
    return 2017 - var;
}
