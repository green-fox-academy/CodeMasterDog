#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "Costumer.h"
#include "UI.h"

using namespace std;

class DataBase
{
    public:
        DataBase();
        void put_costumer_to_vector(Costumer);
        void list_database();
        string get_pin();
        virtual ~DataBase();


    protected:

    private:
         vector<Costumer> vector_db;
};

#endif // DATABASE_H
