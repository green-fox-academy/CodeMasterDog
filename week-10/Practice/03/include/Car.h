#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it
class Car
{
    public:
        Car(string, int);
        virtual ~Car();
        void run(int);
        void getter();

    protected:

    private:
        string type;
        int km;
};

#endif // CAR_H
