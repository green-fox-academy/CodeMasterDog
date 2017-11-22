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

        Costumer Lolka("Lolka", "123455670", "5475", 543256);
        Costumer Zsele("Zsele", "123455671", "2345", 5985622);
        Costumer Feloskutya("Feloskutya", "123455672", "1115", 3987631);
        Costumer Laci("Laci", "123455673", "6969", 26786521);
        //Laci.print_costumer_info();
        DataBase db;
        db.put_costumer_to_vector(Lolka);
        db.put_costumer_to_vector(Zsele);
        db.put_costumer_to_vector(Feloskutya);
        db.put_costumer_to_vector(Laci);

        db.list_database();

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
