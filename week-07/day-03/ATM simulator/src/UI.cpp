#include <iostream>
#include "UI.h"
#include "Costumer.h"
#include "DataBase.h"

using namespace std;
UI::UI()
{
    //ctor
}

void  UI::menu_src()
{
    cout << "Welcome to Minibank!" << endl;
}

void UI::login(/*string card_nr, string entered_pin*/)
{
    cout << "Please, insert your card" << endl;
    cout << ".";
    cout << ".";
    cout << "." << endl;
    cout << "Please, enter your pin" << endl;
    cin >> entered_pin;
}

string UI::getter_entered_pin()
{
  return return entered_pin;
}

string UI::check_pin(string entered_pin)
{
    if (get_entered_pin() == "asd") {
        cout << "okay" << endl;
        //db.list_database();







//get_entered_pin() = vector_db.at(i).
    }
}

UI::~UI()
{
    //dtor
}
