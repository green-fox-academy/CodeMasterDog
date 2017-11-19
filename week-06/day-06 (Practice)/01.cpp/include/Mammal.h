#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
    public:
        Mammal(string _name);
        virtual ~Mammal();
        void Feed();
        void Sleep();

    protected:

    private:
};

#endif // MAMMAL_H
