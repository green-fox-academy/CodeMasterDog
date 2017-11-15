// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.
#include <iostream>
#include <vector>

using namespace std;

class Human {
    public:
        void virtual travelling()
        {
            cout << "I can walk." << endl;
        }
};

class SuperHuman : public Human {
    public:
        void travelling()
        {
            cout << "I can fly." << endl;
        }
};

class AquaHuman : public Human {
    public:
        void travelling()
        {
            cout << "I can riding with dolphins." << endl;
        }
};

int main()
{
    Human h;
    cout << "Human says: ";
    h.travelling();

    cout << "SuperHuman says: ";
    SuperHuman sh;
    sh.travelling();

    cout << "AquaHuman says: ";
    AquaHuman ah;
    ah.travelling();

    return 0;
}
