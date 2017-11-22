#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "Costumer.h"

using namespace std;

class DataBase
{
    public:
        DataBase();
        virtual ~DataBase();
        void put_costumer_to_vector(Costumer);

    protected:

    private:
         vector<Costumer> vector_db;
};

#endif // DATABASE_H
