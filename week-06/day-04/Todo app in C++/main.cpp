#include <iostream>
#include "Task.h"
#include "Ui.h"
#include "UserInput.h"
#include "DataProcessing.h"

using namespace std;

int main()
{

    Ui ui;
    ui.print_menu_src();
    UserInput uinp;
    uinp.token_userinput("asd");
    //DataProcessing dp01;
    //dp01.get_userinput();
    //dp01.new_task_to_vector();
    //cout << "Task name from main: " << dp01.task_name << endl;
    //dp01.print_tasks();


    return 0;
}
