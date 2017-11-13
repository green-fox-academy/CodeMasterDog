#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
     string my_name = "Laszlo Kovacs";
     int my_age = 35;
     double my_hight = 180;
     bool married = false;

     cout << "Hello! My name is " << my_name << ". I'm " << my_age << " years old, and I'm " << my_hight << "cm tall." << endl;
     if (married)
        cout << "And I'm married." << endl;
     else
        cout << "I'm not married yet." << endl;

    return 0;
}
