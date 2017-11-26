#ifndef STORAGE_H
#define STORAGE_H

#include <vector>
#include <string>
#include <iomanip>
#include <conio.h>
#include <iostream>

using namespace std;

struct temperature_record {
	long timestamp;
	int temperature;
};

class Storage
{
    public:
        Storage();
        virtual ~Storage();
        void put_into_vector(string);
        void print_vector();
        void empty_vector();
        temperature_record parseString(string line);
        vector<string> getter_vektor();

    protected:

    private:
        vector<string> stored_data;
};

#endif // STORAGE_H
