#ifndef COSTUMER_H
#define COSTUMER_H

#include <string>

using namespace std;

class Costumer
{
    public:
        Costumer();
        Costumer(string, string , string , float);
        void print_costumer_info();
        string getter_name();
        string getter_pin();

        virtual ~Costumer();

    protected:

    private:
        string name;
        string card_nr;
        string pin;
        string Admin_net_card;
        string Admin_pin;
        string entered_card_nr;

        float balance;
        bool isadmin = false;
};

#endif // COSTUMER_H
