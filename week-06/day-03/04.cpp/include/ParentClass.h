#ifndef PARENTCLASS_H
#define PARENTCLASS_H
#include <string>

using namespace std;

class ParentClass
{
    public:
        ParentClass();
        virtual ~ParentClass();
        string first_string();
        virtual string second_string();

    protected:

    private:
};

#endif // PARENTCLASS_H
