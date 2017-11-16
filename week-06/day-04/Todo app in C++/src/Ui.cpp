#include "Ui.h"
#include <iostream>

using namespace std;

Ui::Ui()
{
    //ctor
}

void Ui::print_menu_src()
{
    cout << "Todo application\n\
            \r====================\n\
            \rCommands:\n\
             \r-a   Adds a new task\n\
             \r-wr  Write current todos to file\n\
             \r-rd  Read todos from a file\n\
             \r-l   Lists all the tasks\n\
             \r-e   Empty the list\n\
             \r-rm   Removes a task\n\
             \r-c   Completes a task\n\
             \r-p   Add priority to a task\n\
             \r-lp  Lists all the tasks by priority" << endl;
}

Ui::~Ui()
{
    //dtor
}
