#ifndef COSTUMER_H
#define COSTUMER_H

#include <string>

using namespace std;

class Costumer
{
    public:
        Costumer();
        Costumer(string, string , string , float);
        print_costumer_info();
        string getter_name();
        virtual ~Costumer();

    protected:

    private:
        string name;
        string card_nr;
        string pin;
        string Admin_net_card;
        string Admin_pin;
        string entered_card_nr;
        string entered_pin;
        float balance;
};

#endif // COSTUMER_H
