#include <iostream>
#include <vector>
#include "DataBase.h"

using namespace std;

DataBase::DataBase()
{
    //ctor
}

void DataBase::put_costumer_to_vector(Costumer var)
{
    vector_db.push_back(var);
}

void DataBase::list_database()
{
    cout << "      List of costumers" << endl;
    cout <<  "-----------------------------" << endl;
    for(unsigned int i = 0; i < vector_db.size(); ++i) {
           // Customer c = vector_db.at(i);
        cout << "Nr." << i+1 << " : " << vector_db.at(i).getter_name() << endl;
    }
}

DataBase::~DataBase()
{
    //dtor
}
