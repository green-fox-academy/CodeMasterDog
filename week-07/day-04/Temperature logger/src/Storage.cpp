#include "Storage.h"
#include <iostream>
#include <vector>

using namespace std;

Storage::Storage()
{
    //ctor
}

void Storage::put_into_vector(string var)
{
    stored_data.push_back(var);
}

void Storage::print_vector()
{
    cout << "after logging" << endl;
    for (unsigned int i = 0; i < stored_data.size(); ++i) {
        cout << stored_data.at(i) << endl;
    }
}

Storage::~Storage()
{
    //dtor
}
