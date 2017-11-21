#ifndef USERINPUT_H
#define USERINPUT_H
#include <string>


using namespace std;

class UserInput
{
    public:
        UserInput();
        string get_userinput();
        int token_userinput(string);
        virtual ~UserInput();

    protected:
        string command;
        string task_name;
        unsigned int priority;

    private:
};

#endif // USERINPUT_H
