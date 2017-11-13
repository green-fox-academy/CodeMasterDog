
#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int avg_coding_time_per_day = 6;
    int semester_in_weeks = 17;
    int workdays = 5;
    int work_hours_weekly = 52;

    cout << workdays * semester_in_weeks *avg_coding_time_per_day << " hours is spent with coding in a semester by an attendee." << endl;
    cout << endl;
    cout << (float)workdays * semester_in_weeks *avg_coding_time_per_day / (semester_in_weeks * work_hours_weekly) *100 << "% percentage of the coding hours in the semester." << endl;

    return 0;
}
