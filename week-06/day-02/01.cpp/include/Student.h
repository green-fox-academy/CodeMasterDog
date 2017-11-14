#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

class Student
{
    public:
        std :: string name;
        unsigned int age;
        Student(std::string name, unsigned int age);
        void print_st();
        virtual ~Student();

    protected:

    private:
};

#endif // STUDENT_H
