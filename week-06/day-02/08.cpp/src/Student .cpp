#include "Student .h"
#include <iostream>

Student ::Student ()
{
    cout << "Let's do some math!" << endl << endl;
}

void Student :: add_grade()
{

    cout << "How many grade does the student have?" << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; ++i) {
        int tmp = 0;

        cout << "Enter the " << i+1 << "th grade" << endl;
        while (tmp <= 0 || tmp >= 6) {
            cin >> tmp;
            if (tmp <= 0 || tmp >= 6)
                cout << "Invalid grade, try again." << endl;
        };
        int_grade.push_back(tmp);
    }
}

float Student::get_average()
{
    int sum = 0;
    for (int i = 0; i < n; ++i){
        sum += int_grade[i];
    }

    return (float)sum / n;
}

Student ::~Student ()
{
    cout << endl << "\"When one teaches, two learn\" - Robert A. Heinlein" << endl;
}
