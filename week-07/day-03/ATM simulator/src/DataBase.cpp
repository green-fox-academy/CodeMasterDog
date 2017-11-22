#include <iostream>
#include <vector>
#include "DataBase.h"
#include "UI.h"
#include "Costumer.h"

using namespace std;

DataBase::DataBase()
{
    //ctor
}

void DataBase::put_costumer_to_vector(Costumer var)
{
    vector_db.push_back(var);
}

string DataBase::get_pin() //get_entered_pin()
{
    for(unsigned int i = 0; i < vector_db.size(); ++i) {
            if (vector_db.at(i).getter_pin() == UI::entered_pin) { //UI::getter_entered_pin())
            cout << "Nr." << i+1 << ": " << vector_db.at(i).getter_name() << endl;
            return vector_db.at(i).getter_name();
    }
}

void DataBase::list_database()
{
    cout << "      List of costumers" << endl;
    cout <<  "-----------------------------" << endl;
    for(unsigned int i = 0; i < vector_db.size(); ++i) {
           // Customer c = vector_db.at(i);
        cout << "Nr." << i+1 << ": " << vector_db.at(i).getter_name() << endl;
    }
}

DataBase::~DataBase()
{
    //dtor
}
