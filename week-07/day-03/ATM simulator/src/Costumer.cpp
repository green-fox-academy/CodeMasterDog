#include <iostream>
#include "Costumer.h"
#include <string>
#include "UI.h"

using namespace std;

//Costumer::Admin_net_card = "AWdasdmorQdfvos139dsDSFDRFG4gfdsgf"; // Don't want to store the admin card number
//Costumer::Admin_pin = "90476583";

Costumer::Costumer()
{
    //ctor
}

Costumer::Costumer(string name, string card_nr, string pin, float balance)
{
    this->name = name;
    this->card_nr = card_nr;
    this->pin = pin;
    this->balance = balance;

}

string Costumer::getter_name()
{
    return name;
}

string Costumer::getter_pin()
{
    return pin;
}

void Costumer::print_costumer_info()
{
    cout << "The card number is: " << card_nr << endl;
    cout << "The pin is: " << pin << endl;
    cout << "The balance is : " << balance << " HUf" << endl;
}

Costumer::~Costumer()
{
    //dtor
}
