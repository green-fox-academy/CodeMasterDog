#include <iostream>
#include "UI.h"

using namespace std;
UI::UI()
{
    //ctor
}

void  UI::menu_src()
{
    cout << "Welcome to Minibank!" << endl;
}

void UI::login(string card_nr, string entered_pin)
{
    cout << "Please, insert your card" << endl;
    cout << ".";
    cout << ".";
    cout << "." << endl;
    cout << "Please, enter your pin" << endl;
    cin >> entered_pin;

}

UI::~UI()
{
    //dtor
}
