#include "FileIo.h"

FileIo::FileIo()
{
    //ctor
}

void FileIo::write_to_file(Storage var)
{
    ofstream data;

    if (ifstream("Temperature_records.txt")) {
        cout << "File already exist" << endl;
        cout << "Do not overwrite is!" << endl;

    } else {
        data.open ("Temperature_records.txt");

        for (unsigned int i = 0; i < var.getter_vektor().size(); ++i) {
            string new_line;
            new_line = var.getter_vektor().at(i) + "\n";
            data  << new_line;
        }
        data.close();
    }
}

void FileIo::delete_file()
{
    if (!ifstream("Temperature_records.txt")) {
        cout << "File does not exist." << endl;
        return;
    }

    cout << "Are you sure you want to delete the log file?" << endl;
    cout << "\t \t y / n"<< endl;
    char key;

    while (key != 'y' || key != 'n') {
        key = getch();

        switch (key) {
        case 'y':
            remove("Temperature_records.txt");
            cout << "File deleted." << endl;
            return;

        case 'n':
            return;

        default :
            cout << "Invalid command." << endl;
            cout << "Choice: y / n." << endl;
        }
    }
}

FileIo::~FileIo()
{
    //dtor
}
