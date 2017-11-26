#include "Storage.h"

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

    while (1) {
        key = getch();

        switch (key) {
        case 'y':
            stored_data.clear();
            cout << "Memory emptied." << endl;
            return;

        case 27:
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
    time_t current_time;
    time(&current_time);

	istringstream exampleStream(line);
	tm parsedDateTime;
	exampleStream >> get_time(&parsedDateTime, "%Y.%m.%d %H:%M:%S")
			>> temperature;
	if (exampleStream.fail()) {
		throw "Invalid string format!";
	}

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
    if ((long long)timestamp > (long long)current_time) {
        //throw "No future time allowed";
        cout << " record time is greater, than current time" << endl;
        }
	cout << "current time is : " << current_time << endl;
	cout << "record time is : " << timestamp << endl;
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
