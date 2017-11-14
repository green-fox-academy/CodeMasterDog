#include "Pirate.h"
#include <iostream>

using namespace std;

Pirate::Pirate()
{
    cout << "Let's drink!!!" << endl;
    counter = 0;
}

void Pirate::drink_rum()
{
    counter++;
}

void Pirate::hows_goin_mate()
{
    if (counter >= 5)
        cout << "Arrrr!" << endl;

    else
        cout << "Nothin'" << endl;
}

Pirate::~Pirate()
{
    cout << "Always good to have a drink with friends!" << endl;
}
