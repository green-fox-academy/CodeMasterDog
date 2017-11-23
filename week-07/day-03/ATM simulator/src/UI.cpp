#include <iostream>
#include "UI.h"
#include "Costumer.h"
#include "DataBase.h"
#include <vector>

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
    string asd = vector_db
    cout << "Please, insert your card" << endl;
    cout << ".";
    cout << ".";
    cout << "." << endl;
    cout << "Please, enter your pin" << endl;
    cin >> entered_pin;
    //if (entered_pin == DataBase::vector_db.at(i).getter_pin())

        cout << "okay" << endl;
}


string UI::getter_entered_pin()
{
  return entered_pin;
}

UI::~UI()
{
    //dtor
}
