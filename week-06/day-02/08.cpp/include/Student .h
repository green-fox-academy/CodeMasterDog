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

    protected:

    private:
        string name;
        vector <int> int_grade();


};

#endif // STUDENT _H
