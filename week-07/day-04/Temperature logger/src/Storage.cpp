#include "Storage.h"
#include <iostream>
#include <vector>
#include <iomanip>

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
    for (unsigned int i = 0; i < stored_data.size(); ++i) {
        cout << stored_data.at(i) << endl;
    }
}

void Storage::empty_vector()
{
    char key;

    cout << "Are you sure you want to empty the memory?" << endl;
    cout << "\t \t y / n"<< endl;

    while (key != 'y' || key != 'n') {
        key = getch();

        switch (key) {
        case 'y':
            stored_data.clear();
            cout << "Memory emptied." << endl;
            return;

        case 'n':
            return;

        default :
            cout << "Invalid command." << endl;
            cout << "Choice: y / n." << endl;
        }
    }
}

temperature_record Storage::parseString(string line) {
	int temperature;

	istringstream exampleStream(line);
	tm parsedDateTime;
	exampleStream >> get_time(&parsedDateTime, "%Y.%m.%d %H:%M:%S")
			>> temperature;
	if (exampleStream.fail()) {
		throw "Invalid string format!";
	}


	if (-273 > temperature || 1000 < temperature) {
		throw "Temperature is out of range!";
	}

	long timestamp = mktime(&parsedDateTime);

	temperature_record rec;
	rec.temperature = temperature;
	rec.timestamp = timestamp;
	return rec;
}

vector<string> Storage::getter_vektor()
{
    return stored_data;
}

Storage::~Storage()
{
    //dtor
}
