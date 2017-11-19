#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
    public:
        Animal(string _name);
        string getName();
        virtual ~Animal();

    protected:
        string name;

    private:
};

#endif // ANIMAL_H
