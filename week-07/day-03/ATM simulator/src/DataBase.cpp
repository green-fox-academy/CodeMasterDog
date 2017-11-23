#include <iostream>
#include <vector>
#include "DataBase.h"

//#include "Costumer.h"

using namespace std;

DataBase::DataBase()
{
    //ctor
}

void DataBase::put_costumer_to_vector(Costumer var)
{
    vector_db.push_back(var);

}

/*
string DataBase::getter_login_datas()
{
    for(unsigned int i = 0; i < vector_db.size(); ++i) {
        if(vector_db.at(i).getter_name() == ui_02.getter_entered_pin())
        cout << "cool" << endl;

    }
}
*/

string DataBase::get_pin(string var) //get_entered_pin()
{
    for(unsigned int i = 0; i < vector_db.size(); ++i) {
            if (vector_db.at(i).getter_pin() == "sdf")  //UI::getter_entered_pin())
                //cout << "Nr." << i+1 << ": " << vector_db.at(i).getter_name() << endl;

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

vector<Costumer> DataBase::getter_vector()
{
 return vector_db;
}

DataBase::~DataBase()
{
    //dtor
}
