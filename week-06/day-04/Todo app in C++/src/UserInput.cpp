#include "UserInput.h"

UserInput::UserInput()
{
    task_name = "";
}

string UserInput::get_userinput()
{
    task_name = "Feed the cat";
    return task_name;
}

int UserInput::token_userinput(string user_input)
{
    int counter = 0;
    while (counter != 1) {
            ++counter;
        //(user_input != "exit")
        if (user_input == "-l") {
            cout << " Lists all the tasks" << endl;
            return 1;
        }

        else if (user_input == "-e") {
            cout << "Empty the list" << endl;
            return 2;
        }

        else if (user_input == "-lp") {
            cout << "Lists all the tasks by priority" << endl;
            return 3;
        }

        else if (user_input == "-rd") {
            cout << "Read todos from a file" << endl;
            return 4;
        }

        else if (user_input == "-wr") {
            cout << "Write current todos to file" << endl;
            return 5;
        }

        else if (user_input == "exit") {
            system("cls");
            cout << "LLAP" << endl;
            return 6;
        }

        else if (user_input.find(" ", 0) == std::string::npos) {
            cout << "Invalid input"<< endl;
            continue;
        }

        command = user_input.substr(0, user_input.find(" ", 0));
        priority = user_input.substr(user_input.find_last_of(" ")+1); // yet it can be non numeric

        if (command == "-a") {
            cout << "Great, you just ordered command ""-a""" << endl;

        }

        cout << user_input << endl;
        cout << command << endl;
        cout << priority << endl;


    }



}

UserInput::~UserInput()
{
    //dtor
}
