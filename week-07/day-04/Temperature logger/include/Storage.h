#ifndef STORAGE_H
#define STORAGE_H

#include <vector>
#include <string>

using namespace std;

class Storage
{
    public:
        Storage();
        virtual ~Storage();
        void put_into_vector(string);
        void print_vector();


    protected:

    private:
        vector<string> stored_data;

};

#endif // STORAGE_H
