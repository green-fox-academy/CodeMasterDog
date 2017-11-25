#ifndef FILEIO_H
#define FILEIO_H

#include <iostream>
#include <fstream>
#include "Storage.h"

using namespace std;

class FileIo
{
    public:
        FileIo();
        virtual ~FileIo();
        void write_to_file(Storage);

    protected:

    private:
};

#endif // FILEIO_H
