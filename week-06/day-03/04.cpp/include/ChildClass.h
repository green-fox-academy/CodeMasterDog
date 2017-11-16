#ifndef CHILDCLASS_H
#define CHILDCLASS_H

#include <ParentClass.h>


class ChildClass : public ParentClass
{
    public:
        ChildClass();
        string first_string();
        string second_string();
        virtual ~ChildClass();

    protected:

    private:
};

#endif // CHILDCLASS_H
