// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
#include <iostream>
#include <string>
#include "ParentClass.h"
#include "ChildClass.h"

using namespace std;

int main()
{
    ParentClass *p = new ChildClass();
    cout << p->first_string() << endl;
    cout << p->second_string() << endl;
    cout << endl << "...Casting in progress..." << endl << endl;
    cout << ((ChildClass*)p)->first_string() << endl;
    cout << ((ChildClass*)p)->second_string() << endl;

    return 0;
}
