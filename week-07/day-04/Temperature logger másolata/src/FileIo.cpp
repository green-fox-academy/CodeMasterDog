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
        cout << "\t\t a / o or Esc ?" << endl;
        char key;

        while (1){
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

            case 27:
                return;

            default :
                cout << "Invalid command." << endl;
                cout << "Choice: a / o or Esc." << endl;
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

void FileIo::read_from_file(Storage var)
{
    if (!ifstream("Temperature_records.txt")) {
        cout << "Could not find a log file" << endl;
        return;
    }
    ifstream data_to_read;

    cout << "Do you want to print the file on the screen or store in the memory?" << endl;
    cout << "\t \t s / m" << endl;
    char key;
    string output;

    while (1) {
        key = getch();
        cout << key << endl;

        switch (key) {

        case 's':
            {

            data_to_read.open("Temperature_records.txt");
            while (!data_to_read.eof()) {
         //       for (int i = 0; i <!data_to_read.eof(); ++i) {
                    getline(data_to_read ,output);
                cout << output + "\n";

            }
            data_to_read.close();
            return;
            } // write to screen

        case 'm': // write to memory

            if (!var.getter_vektor().empty()) {
                cout << "Memory contains data. Do you want to append to it or overwrite?" << endl;
                cout << "\t\t a / o or Esc" << endl;

                char a;
                while (a) {
                    a = getch();
                    switch (a) {

                        case 'a':
                            data_to_read.open("Temperature_records.txt");
                            while (!data_to_read.eof()) {
                            getline(data_to_read ,output);
                            var.put_into_vector(output);// << output + "\n";
                            }
                            data_to_read.close();
                            return;

                        case 'o':
                            cout << "nothing yet." << endl;
                            break;
                    }
                }


            }


        default:
            cout << "here: choice s / m." << endl;
        }
   }
}

void FileIo::delete_file()
{
    if (!ifstream("Temperature_records.txt")) {
        cout << "File does not exist." << endl;
        return;
    }

    cout << "Are you sure you want to delete the log file?" << endl;
    cout << "\t \t y / n" << endl;
    char key;

    while (1) {
        key = getch();

        switch (key) {
        case 'y':
            remove("Temperature_records.txt");
            cout << "File deleted." << endl;
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

FileIo::~FileIo()
{
    //dtor
}
