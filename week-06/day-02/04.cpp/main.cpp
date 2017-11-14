  // The market price of the houses is 400 EUR / square meters
  // Make the get_price() function work
  // Create a constructor for the House class that takes it's address and area.
#include <iostream>
#include <string>
#include "House.h"

using namespace std;

int main()
{
    House house = House("Andrassy 66", 349);
    //house.print_h();
    cout << "The house's price is : " << house.get_price() << " EUR" << endl;

    return 0;
}
