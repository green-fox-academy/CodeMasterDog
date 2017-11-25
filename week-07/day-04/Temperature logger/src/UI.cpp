#include "UI.h"
#include "Storage.h"

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
 \rw        Write logged data to file\n\
 \re        Exit from the program\n" << endl;
}

void UI::choice()
{
    string line, date, time;
	int temperature;

    Storage stor;
    SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);
    is_opened = false;
    while (key != 'e' || 'q') {
        cout << "Press a key to command" << endl;
        key = getch();
        switch (key) {
            case 'h':
                system("cls");
                menu_src();
                break;

            case 'o':
                if (is_opened) {
                    cout << "Port is already opened." << endl;
                    break;
                } else {
                    serial->openPort();
                    cout << "Port opened." << endl;
                    is_opened = true;
                }
                 break;

            case 's':
                {
                if (!is_opened) {
                    cout << "Please open the Port first." << endl;
                    break;
                }
                string pressed = "a";
                while(pressed != "s"){
                    serial->readLineFromPort(&line);
                    if (line.length() > 0){
                        correcting_format(line);
                        cout << line << endl;
                        try {
                            temperature_record good = stor.parseString(line);
                            stor.put_into_vector(line);
                            //cout << "good.temperature: " << good.temperature << ", good.timestamp: " << good.timestamp << endl;
                        } catch (const char *exception) {
                            cout << "Something went wrong: " << exception << endl;
                        }
                    }
                    if (_kbhit())
                        pressed = getch();
                }
                break;
                }

            case 'c':
                if (!is_opened) {
                    cout << "Port is already closed." << endl;
                    break;
                } else {
                    serial->closePort();
                    is_opened = false;
                    cout << "Port closed." << endl;
                    break;
                }

            case 'l':
                {
                cout << "List after error handling" << endl;
                stor.print_vector();
                break;
                }
            case 'w':
                {
                cout << "Write logged data to file" << endl;
                FileIo fio;
                fio.write_to_file(stor);
                break;
                }


            case ('e'):
            case ( 'q'):
                cout << "Exit the program" << endl;
                exit(0);

            default :
                cout << "Invalid command." << endl;
        }
    }
}

void UI::correcting_format(string &var)
{
    if (var[7] != '.') //month
        var.insert(5, "0");

    if (var[10] != ' ') // day
        var.insert(8, "0");

    if (var[13] != ':') //hour
        var.insert(11, "0");

    if (var[16] != ':') //minute
        var.insert(14, "0");

    if (var[19] != ' ') //second
        var.insert(17, "0");
}

UI::~UI()
{
    //dtor
}
