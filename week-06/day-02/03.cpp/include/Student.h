#ifndef STUDENT_H
#define STUDENT_H
#include <string>


class Student
{
    public:
        std :: string name;
        unsigned int age;
        Student( std :: string name, unsigned int age);
        virtual ~Student();
        std :: string greet();
        void print_fn(std :: string var);

    protected:

    private:
};

#endif // STUDENT_H
