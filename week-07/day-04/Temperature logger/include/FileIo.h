#ifndef FILEIO_H
#define FILEIO_H

#include <iostream>
#include <fstream>
//#include <ios>


#include "Storage.h"
#include <conio.h>

using namespace std;

class FileIo
{
    public:
        FileIo();
        virtual ~FileIo();
        void write_to_file(Storage);
        void delete_file();

    protected:

    private:
};

#endif // FILEIO_H
