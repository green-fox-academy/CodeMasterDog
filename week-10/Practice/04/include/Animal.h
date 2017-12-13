#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
    public:

        Animal();
        virtual ~Animal();
        void eat();
        void drink();
        void play();
        void getter();

    protected:

    private:

        int hunger;
        int thirst;
};

#endif // ANIMAL_H
