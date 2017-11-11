#include <stdlib.h>
#include "functions.h"

extern int task_counter;
TASKS tskk[10];



int get_userinput()
{


    char input[255] = "";
    static char command[2] = "";
    static char task_name[255] = "";
    static char priority[0] = "";
    char first_space[255];
    char last_space[255];
    int lenght_of_task;

    //strcasecmp is NOT case sensitive
    while (strcasecmp(input, "exit") != 0) {
        printf("Enter Your input: \n");
        gets(input);
        //printf("Your input was: %s\n", input);
        //one parameter commands
        if (strcasecmp(input, "-l") == 0) {
            printf(" Lists all the tasks\n");
            list_tasks(tskk);
            return 1;
        }

        if (strcasecmp(input, "-e") == 0) {
            printf("Empty the list\n");
            return 2;
        }

         if (strcasecmp(input, "-lp") == 0) {
            printf("Lists all the tasks by priority\n");
            return 3;
        }

         if (strcasecmp(input, "-rd") == 0) {
            printf("Read todos from a file\n");
            return 4;
        }

         if (strcasecmp(input, "-wr") == 0) {
            printf("Write current todos to file\n");
            return 5;
        }

        if (strcasecmp(input, "exit") == 0) {
            system("cls");
            printf("LLAP\n");
            return 6;
        }

        if (strchr(input,' ') == NULL) {
            printf("Invalid input\n");
            continue;
        }

        break;
    }

    strcpy(first_space, strchr(input,' '));
    strcpy(last_space, strrchr(input,' '));
    //printf("len of first: %d\n", strlen(first_space));
    //printf("len of last: %d\n",strlen(last_space));
    //printf("len of diff: %d\n",strlen(first_space) - strlen(last_space));
    //two parameter commands
    if (first_space != NULL) {
        for(int i = 0; i < strlen(input)-strlen(first_space); i++) {
            command[i] = input[i];
        }
        if (strcasecmp(command, "-a") == 0) {
            //printf("Great, you just ordered command ""-a""\n");
            strcpy(task_name, strchr(input,' '));
            lenght_of_task = strlen(task_name);
            //printf("the command is: %s\n", command);
            //printf("the task is: %s\n", task_name);
            add_new_task(tskk, task_name, priority, lenght_of_task);
            //void add_new_task(TASKS *, char* , int, int);
        }

        if (strcasecmp(command, "-rm") == 0) {
            printf("Great, you just ordered command ""-rm""\n");
            strcpy(task_name, strchr(input,' '));
            lenght_of_task = strlen(task_name);
            printf("the command is: %s\n", command);
            printf("the task is: %s\n", task_name);
        }

        if (strcasecmp(command, "-c") == 0) {
            printf("Great, you just ordered command ""-c""\n");
            strcpy(task_name, strchr(input,' '));
            lenght_of_task = strlen(task_name);
            printf("the command is: %s\n", command);
            printf("the task is: %s\n", task_name);
        }
        //three parameter commands
        if (strcasecmp(command, "-p") == 0 && last_space != NULL && first_space != last_space) {
            printf("Great, you just ordered command ""-p""\n");
            strcpy(priority, last_space);
            strncpy(task_name, first_space + 1, strlen(first_space) - (strlen(last_space) +1));
            lenght_of_task = strlen(task_name);
            printf("the command is: %s\n", command);
            printf("the task is: %s\n", task_name);
            printf("the task's priority is: %s\n", priority);
        }
    }
}

void print_menu_src()
{
        const char menu[] = "\n      Todo application\n\
    ====================\n\
    Commands:\n\
     -a   Adds a new task\n\
     -wr  Write current todos to file\n\
     -rd  Read todos from a file\n\
     -l   Lists all the tasks\n\
     -e   Empty the list\n\
     -rm   Removes a task\n\
     -c   Completes a task\n\
     -p   Add priority to a task\n\
     -lp  Lists all the tasks by priority\n";
    printf("%s", menu);
}

void add_new_task(TASKS *tskk, char *name, int prio, int len)
{
    if (task_counter == 10) {
        printf("Already reached the maximum number of tasks. Can't add a new one.\n");
        get_userinput();
        return;
    }

    strcpy (tskk[task_counter].taskname, name);
    //printf("Entered task: %s\n", tskk[task_counter].taskname);
    task_counter++;
    get_userinput();
    /*//just for testing have to break get_input
    for (int i = 0; i < task_counter; i++) {
        printf("Task[%d]: %s\n", i, tskk[i].taskname);
    }
    */
}

void list_tasks(TASKS* var)
{
    for (int i = 0; i <task_counter; i++) {
        printf("task[%d]: %s\n",i+1, var[i].taskname);
    }
    get_userinput();
}
