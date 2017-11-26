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
        cout << "Do you want append the new data or overwrite the file?" << endl;
        cout << "\t\t\t a / o ?" << endl;
        char key;

        while (key != 'o' || key != 'a'){
            key = getch();

            switch (key) {

            case 'a':
                data.open ("Temperature_records.txt", std::ios_base::app);
                for (unsigned int i = 0; i < var.getter_vektor().size(); ++i) {
                    string new_line;
                    new_line = var.getter_vektor().at(i) + "\n";
                    data  << new_line;
                }
                data.close();
                cout << "New data appended." << endl;
                return;

            case 'o':
                data.open ("Temperature_records.txt");
                for (unsigned int i = 0; i < var.getter_vektor().size(); ++i) {
                    string new_line;
                    new_line = var.getter_vektor().at(i) + "\n";
                    data  << new_line;
                }
                data.close();
                cout << "File overwritten." << endl;
                return;

            default :
                cout << "Invalid command." << endl;
                cout << "Choice: a / o." << endl;
                continue;
            }
        }

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
