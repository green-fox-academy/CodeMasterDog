#include <iostream>
#include "UI.h"

using namespace std;

UI::UI()
{
    //ctor
}

void UI::menu_src()
{
    cout << "Temperature Logger Application\n\
\r==============================\n\
\rCommands:\n\
 \rh        Show command list\n\
 \ro        Open port\n\
 \rs        Start logging / Stop logging\n\
 \rc        Close port\n\
 \rl        List after error handling\n\
 \re        Exit from the program\n" << endl;
}

UI::~UI()
{
    //dtor
}
