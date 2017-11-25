#include "FileIo.h"

FileIo::FileIo()
{
    //ctor
}

void FileIo::write_to_file(Storage var)
{
    ofstream data;
    data.open ("Temperature_records.txt");

    for (unsigned int i = 0; i < var.getter_vektor().size(); ++i) {
    string new_line;
    new_line = var.getter_vektor().at(i) + "\n";
     data  << new_line ;

}

    data.close();
}

FileIo::~FileIo()
{
    //dtor
}
