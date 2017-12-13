#include <iostream>
#include <string>

using namespace std;

class Pirate {
        public:

            Pirate(): counter(0) {};
            drink_rum()
            {
                counter ++;
                cout << "Prosit!!!" << endl;
            };
            string hows_goin_mate() {
            if (counter < 5)
                return string("Nothin'");
            else
                return string("Arrrr!");
            };

        private:

            int counter;


    };

int main() {

    Pirate hook;
    hook.drink_rum();
    hook.drink_rum();
    hook.drink_rum();
    cout << hook.hows_goin_mate() << endl;
    hook.drink_rum();
    hook.drink_rum();
    hook.drink_rum();
    cout << hook.hows_goin_mate() << endl;
    cout << hook.hows_goin_mate() << endl;

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise


  return 0;
}
