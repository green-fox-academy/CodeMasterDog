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

void UI::choice()
{
    SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);

    while (key != 'e')
    {
        Storage stor;
        cout << "Press a key to command" << endl;
        key = getch();
        switch (key) {
            case 'h':
                system("cls");
                menu_src();
                continue;

            case 'o':
                    serial->openPort();
                    cout << "port opened" << endl;
                 break;

            case 's':
                {
                string pressed = "a";
                    while(pressed != "s"){
                        string line;
                        serial->readLineFromPort(&line);
                        if (line.length() > 0){
                            cout << line << endl;
                            stor.put_into_vector(line);
                            }
                            if (_kbhit()){
                                pressed = getch();

                            }
                    }
                }
                break;

            case 'c':
                cout << "close port" << endl;
                serial->closePort();
                break;

            case 'l':
                cout << "List after error handling" << endl;
                stor.print_vector();
                break;

            case 'e':
                cout << "Exit the program" << endl;
                exit(0);

            default:
                cout << "default" << endl;

        }
    }
}

UI::~UI()
{
    //dtor
}
