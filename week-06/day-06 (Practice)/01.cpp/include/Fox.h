#ifndef FOX_H
#define FOX_H

#include "Animal.h"
#include "Mammal.h"

class Fox : public Mammal
{
    public:
        Fox(string _name);
        string getFurCoat();
        void setFurCoat(string _furcoat);
        virtual ~Fox();

    protected:
        string furcoat;

    private:
};

#endif // FOX_H
