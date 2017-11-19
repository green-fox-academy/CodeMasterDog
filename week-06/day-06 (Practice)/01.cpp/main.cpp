//TODO: create a class called Mammal inherited from Animal
//extend it with to functions
//the one is 'Feed' which prints out 'Feeding...'
//the other is 'Sleep' which prints out 'Sleeping...'

//after that create another class called Fox
//extend it with a string data member called 'furcoat'
//then extend it with 'getFurCoat' and 'setFurCoat' methods
#include <iostream>
#include "Fox.h"

using namespace std;

int main()
{
    //create a fox object and call all of its functions (all in all 6 including the constructor)

    Fox fox_01("GreenFox");
    cout << "Object name is: " << fox_01.getName() << endl;
    fox_01.setFurCoat("white");
    cout << "Furcoat's color is: " << fox_01.getFurCoat() << endl;
    fox_01.Sleep();
    fox_01.Feed();
    //fox_01=Fox("fox_2"); // recreating
    //cout << "Object after rename is: " << fox_01.getName() << endl;

    return 0;
}
