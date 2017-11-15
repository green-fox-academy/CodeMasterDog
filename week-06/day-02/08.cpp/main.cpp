// Create a student Class
// that has a method `add_grade`, that takes a grade from 1 to 5
// an other method `get_average`, that returns the average of the
// grades
#include <iostream>
#include <string>
#include <iomanip>
#include "Student .h"

using namespace std;

int main()
{
    Student a;
    a.add_grade();
    cout << endl << "The AGV of the students' grades is: " << fixed << setprecision(2) << a.get_average() << endl;

    return 0;
}
