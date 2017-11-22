#ifndef COSTUMER_H
#define COSTUMER_H

#include <string>

using namespace std;

class Costumer
{
    public:
        Costumer();
        Costumer(string card_nr );
        virtual ~Costumer();

    protected:

    private:
        string card_nr;
        string Admin_net_card;
        string Admin_pin;
        string entered_pin;
};

#endif // COSTUMER_H
