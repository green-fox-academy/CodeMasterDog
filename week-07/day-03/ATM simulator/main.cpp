#include <iostream>
#include "UI.h"
#include "Costumer.h"
#include "DataBase.h"

using namespace std;

int main()
{
        UI *ui_01 = NULL;

    try{
        ui_01 = new UI;
        ui_01->menu_src();
        Costumer Laci("123455676", "1234", 543256);
        Laci.print_costumer_info();

    } catch (...){
        delete ui_01;
        cout << "Error occurred." << endl;

    }

    return 0;
}


/*int *p = NULL;
p = new int;

p = 10;

delete p;
*/
