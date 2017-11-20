#ifndef PERSON_H
#define PERSON_H
#include <ctime>
// Create a class named Person.
// This class shoud have a constructor which prints out the
// date of the creation of the istance.
using namespace std;

class Person
{
    public:
        Person();
        virtual ~Person();

    protected:

    private:
        time_t now = time(0);
        char * mytime = ctime(&now);
};

#endif // PERSON_H
