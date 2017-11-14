#ifndef HOUSE_H
#define HOUSE_H
#include <string>

using namespace std;


class House
{
    public:
        const int market_price = 400;
        unsigned int get_price();
        House(string address, unsigned int area);
        void print_h();
        virtual ~House();

    protected:

    private:
        string address;
        unsigned int area;
        unsigned int price;
};

#endif // HOUSE_H
