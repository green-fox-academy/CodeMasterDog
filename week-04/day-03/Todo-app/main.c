#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

//TASKS add_new_task(enum prog, char, int);

int task_counter = 0;

int main()
{
    char temp_name[40] = "";
    char temp_name2[40] = "masodik feladat";
    int ln = 0;
    int temp_prio = 0;
   // enum progression temp_enum = have_not_started_yet;

    TASKS tskk[10];
    get_userinput();
    print_menu_src();
    //puts("Enter task name");
    //gets(temp_name);
    //ln = strlen(temp_name);
    //puts("Enter task priority");
    //getc(temp_prio);
    //add_new_task(enum progression, temp_name ,temp_prio );
    //add_new_task(tskk, temp_name, temp_prio, ln);
    //add_new_task(tskk, temp_name2, temp_prio, ln);
    FILE *myfile = "test.txt";
    //create_file(myfile, &tskk);
    //list_tasks(tskk);
    //just for check
    //printf("task name is :%s\n", tskk.taskname);
    return 0;
}
