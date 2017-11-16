#ifndef USERINPUT_H
#define USERINPUT_H
#include <string>


using namespace std;

class UserInput
{
    public:
        UserInput();
        int get_userinput();
        token_userinput();
        virtual ~UserInput();

    protected:
        string command;
        string task_name;
        unsigned int priority;

    private:
};

#endif // USERINPUT_H
