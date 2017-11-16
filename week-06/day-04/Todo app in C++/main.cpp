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
    //UserInput tsk;
    //cout << tsk.get_userinput() << endl;
    DataProcessing dp01;
    dp01.get_userinput();
    dp01.new_task_to_vector();
    cout << dp01.task_name << endl;





    return 0;
}
