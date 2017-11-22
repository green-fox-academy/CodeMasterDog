#include <iostream>
#include "DataBase.h"

DataBase::DataBase()
{
    //ctor
}

void DataBase::put_costumer_to_vector(Costumer var)
{
    cout << "hello database" << endl;
    vector_db.push_back(var);
}

DataBase::~DataBase()
{
    //dtor
}
