#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
    public:
        Car(string type, float km);
        virtual ~Car();
        void run(float km);
        void print_car();

    protected:

    private:
        string type;
        float km;
};

#endif // CAR_H
