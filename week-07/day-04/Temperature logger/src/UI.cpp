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
    //SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);
        //serial->openPort();
        //string line;
        //while(1){
        //serial->readLineFromPort(&line);
        //if (line.length() > 0){
        //cout << line << endl;
        //}
        //}
        //serial->closePort();

    while (key != 'e')
    {
        string pressed = "a";
        SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);

        Storage stor;
        cout << "Press a key to command" << endl;
        key = getch();
        switch (key) {
            case 'h':
                system("cls");
                menu_src();
                continue;

            case 'o':
                {
                    serial->openPort();
                    string line;
                    //int a = 0;
                    //while(1){
                    while(pressed != "s"){
                        serial->readLineFromPort(&line);
                        stor.put_into_vector(line);
                        if (line.length() > 0)
                            cout << line << endl;
                    //serial->readLineFromPort(&line);
                   //a++;
                   //cout << a << endl;
                   // if (a > 8)
                        if (_kbhit()){
                            pressed = getch();
                    //break;
                        }

                    }




                }


            case 's':
                cout << "Start logging / Stop logging" << endl;
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
