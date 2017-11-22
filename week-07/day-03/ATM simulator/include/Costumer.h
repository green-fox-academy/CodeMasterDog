#ifndef COSTUMER_H
#define COSTUMER_H

#include <string>

using namespace std;

class Costumer
{
    public:
        Costumer();
        Costumer(string card_nr, string pin, float);
        print_costumer_info();
        virtual ~Costumer();

    protected:

    private:
        string card_nr;
        string pin;
        string Admin_net_card;
        string Admin_pin;
        string entered_card_nr;
        string entered_pin;
        float balance;
};

#endif // COSTUMER_H
