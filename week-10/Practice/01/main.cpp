#include <iostream>
#include <string>
#include <vector>
/*
Not good enough solution:
 -  takes a grade from" means takes a parameter
 -  shouldn't care with nums of grade ("how many grades does the sutdent have?")


*/
using namespace std;

class Student {
    public:

        void add_grade()
        {
            int num = 0;

            cout << "how many grades does the sutdent have?" << endl;
            cin >> num;

            for (int i = 0; i < num; ++i) {
                input_grade = 9;
                while (input_grade <= 0 || input_grade >= 6) {
                    cout << "enter the grade" << endl;
                    cin >> input_grade;
                }
                v_grades.push_back(input_grade);
            }
        }

        float get_average()
        {
            float avg = 0;
            for (int i = 0; i < v_grades.size(); ++i) {
                avg += v_grades[i];
            }
            return (float)avg/v_grades.size();
        }

        void getter()
        {
            cout << endl;
            cout << endl;
            cout << "the stuents grades: ";
            for (int i = 0; i < v_grades.size(); i++) {
                cout << v_grades[i] << ", ";
            }
            cout << endl;

        }

    private:

        int input_grade;
        vector<int> v_grades;

};
int main()
{
    Student stud;
    stud.add_grade();
    stud.getter();
    cout << "The grades AVG: " <<stud.get_average() << endl;

    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

    return 0;
}


/*
// Author      : Z

#include <iostream>

using namespace std;

class Student {
	public:

		Student(): _sumGrade(0), _gradeCount(0) {};

		void add_grade(int grade) {
			if (grade < 1 || grade > 5) {
				cout << "Invalid grade!!" << endl;
				return;
			}
			_sumGrade += grade;
			_gradeCount++;
		};

		float get_average() {
			return _sumGrade/_gradeCount;
		};

	private:
		int _sumGrade;
		int _gradeCount;
};

int main() {
	Student s;
	s.add_grade(4);
	s.add_grade(5);
	s.add_grade(3);
	s.add_grade(10);

	cout << "Average is: " << s.get_average() << endl;

}

*/
