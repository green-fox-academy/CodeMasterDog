#ifndef STUDENT _H
#define STUDENT _H
#include <string>
#include <vector>

using namespace std;

class Student
{
    public:
        Student ();
        virtual ~Student ();
        void add_grade();
        float get_average();

    protected:

    private:
        string name;
        vector <int> int_grade;
        int n;


};

#endif // STUDENT _H
