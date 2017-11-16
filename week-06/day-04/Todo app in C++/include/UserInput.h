#ifndef USERINPUT_H
#define USERINPUT_H
#include <string>


using namespace std;

class UserInput
{
    public:
        UserInput();
        string get_userinput();
        void token_userinput();
        virtual ~UserInput();
        string task_name;

    protected:
        string command;
        unsigned int priority;

    private:
};

#endif // USERINPUT_H
