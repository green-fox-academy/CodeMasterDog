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
    cout << "after logging" << endl;
    for (unsigned int i = 0; i < stored_data.size(); ++i) {
        cout << stored_data.at(i) << endl;
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
