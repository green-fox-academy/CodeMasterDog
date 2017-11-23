#include <iostream>
#include <string>
#include <vector>
#include "UI.h"
#include "Storage.h"

using namespace std;

int main()
{
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }
    //  strptime - date and time conversion
    //  regex reg

    UI ui;
    ui.menu_src();
    ui.choice();



    // connection


    return 0;
}
