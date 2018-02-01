#include <stdlib.h>
#include "functions.h"

extern int task_counter;
TASKS tskk[10];

int get_userinput()
{

    char input[255];
    static char command[2] = ""; // static needed
    static char task_name[255] = "";
    static char priority[0] = "";
    char first_space[255];
    char last_space[255];
    int lenght_of_task;

    //strcasecmp is NOT case sensitive
    while (strcasecmp(input, "exit") != 0) {
        printf("Enter Your input: \n");
        gets(input);
        if (strcasecmp(input, "-l") == 0) {
            printf("Lists all the tasks\n");
            list_tasks(tskk);
            return 1;
        }

        if (strcasecmp(input, "-e") == 0) {
            char keypressed;

            while (keypressed != 'y' && keypressed != 'n') {
                printf("Empty the list?\n");
                printf("Choice y / n.\n");
                keypressed = 'x';
                keypressed = getch(stdin);
                if (keypressed == 'n') {
                    get_userinput();
                    return 0;
                }
            }
            for (int i = 0; i < task_counter - 1; i++) {
                tskk[i].taskname[0] = '\0';
                tskk[i].priority = 0;
            }
            task_counter= 0;
            get_userinput();
            return 2;
        }

        if (strcasecmp(input, "-lp") == 0) {
            printf("Lists all the tasks by priority\n");
            get_userinput();
            return 3;
        }

        if (strcasecmp(input, "-rd") == 0) {
            if (task_counter > 0) {
                char keypressed;
                while (keypressed != 'y' && keypressed != 'n') {
                    printf("There is/are task(s) in memory\n");
                    printf("Do you want to overwrite? Choice y / n.\n");
                    keypressed = 'x';
                    keypressed = getch(stdin);
                    if (keypressed == 'n') {
                        get_userinput();
                        return 0;
                    }
                }
                for (int i = 0; i < task_counter - 1; i++) {
                    tskk[i].taskname[0] = '\0';
                    tskk[i].priority = 0;
                }
                task_counter= 0;
            }
            printf("Okay, read todos from file\n");
            FILE *fp;
            fp = fopen("ToDo.txt", "r");

            get_userinput();
            return 4;
        }

        if (strcasecmp(input, "-wr") == 0) {
            create_file(tskk);
            return 5;
        }

        if (strcasecmp(input, "exit") == 0) {
            system("cls");
            printf("LLAP\n");
            return 6;
        }

        if (strcasecmp(input, "help") == 0) {
            system("cls");
            print_menu_src();
            continue;
        }

        if (strchr(input,' ') == NULL) {
            if (strcasecmp(input, "-a") == 0) {
                printf("Unable to add: No task name provided\n");
                continue;
            }

            if (strcasecmp(input, "-rm") == 0) {
                printf("Unable to remove: No task index is provided\n");
                continue;
            }

            printf("Invalid input\n");
            continue;
        }
                                                        //From here have to handle the two parameter commands

        strcpy(first_space, strchr(input,' '));         //will contain the task name (without the command)
        strcpy(last_space, strrchr(input,' '));         //will contain the part after the last space
        int lenght = strlen(input)-strlen(first_space); //lenght of the command
        if (first_space != NULL) {                      //copying the command, then close the array
            for(int i = 0; i < lenght; i++) {
                command[i] = input[i];
                if (i == lenght - 1)
                    command[i + 1] = '\0';
            }
        }

        if (strcasecmp(command, "-a") == 0) {
            strcpy(task_name, strchr(input,' '));
            lenght_of_task = strlen(task_name);
            if (lenght_of_task < 2) {
                printf("Unable to add: No task name provided\n");
                get_userinput();
                return -1;
            }
            add_new_task(tskk, task_name, priority);
            return 8;
        }

        if (strcasecmp(command, "-rm") == 0) {
            strcpy(task_name, strchr(input,' ')); //copying taskname from input after the first space
            remove_task(tskk, task_name);
            return 9;

        }

        if (strcasecmp(command, "-c") == 0) {
            //TODO: implement later
            printf("Great, you just ordered command ""-c""\n");
            get_userinput();
            return 10;
        }
                                                    //From here have to handle the three parameter command
        if (strcasecmp(command, "-p") == 0 && last_space != NULL && first_space != last_space) { //make sure there are at least two spaces in the input
            //TODO: implement later
            printf("Great, you just ordered command ""-p""\n");
            strcpy(priority, last_space);           //copy priority from last space of input
            strncpy(task_name, first_space + 1, strlen(first_space) - (strlen(last_space) +1)); //copying from first space as long as the name is
            lenght_of_task = strlen(task_name);
            printf("the command is: %s\n", command);
            printf("the task is: %s\n", task_name);
            printf("the task's priority is: %s\n", priority);
            get_userinput();
            return 11;
        }

        printf("Invalid input\n");

    }
}

void print_menu_src()
{
        const char menu[] = "\n      Todo application\n\
    ====================\n\
    Commands:\n\
     -a     Adds a new task\n\
     -wr    Write current todos to file\n\
     -rd    Read ToDos from a file\n\
     -l     Lists all the tasks\n\
     -e     Empty the list\n\
     -rm    Remove a task (i.e., -rm 2)\n\
     exit   type exit to quit the program\n\
     help   show this screen\n\n";
    printf("%s", menu);
} //TODO: implement later: -c     Completes a task\n\, -lp    Lists all the tasks by priority\n\, -p     Add priority to a task\n\

void add_new_task(TASKS *tskk, char *name, int prio)
{
    if (task_counter == 10) {
        printf("Already reached the maximum number of tasks. Can't add a new one.\n");
        get_userinput();
        return;
    }

    strcpy (tskk[task_counter].taskname, name);
    task_counter++;
    get_userinput();
}

void remove_task(TASKS *var, char name[])
{
    int task_to_delete = atoi(name);

    if (atoi(name) == 0 || task_to_delete > task_counter || task_to_delete <= 0) {
        printf("Invalid input.\n");
        get_userinput();
        return;
    }

    for (int i = 0; i < task_counter; i++) {
        strcpy(var[i].taskname, var[i].taskname);
        if (i >= task_to_delete)
            strcpy(var[i - 1].taskname, var[i].taskname);
    }

    task_counter--;
    get_userinput();
}

void list_tasks(TASKS* var)
{
    for (int i = 0; i <task_counter; i++) {
        printf("task[%d]: %s\n",i+1, var[i].taskname);
    }
    get_userinput();
}

int create_file(TASKS* var)
{
    FILE *fp;
    char keypressed;

    if (task_counter == 0) {
        printf("No tasks to write file\n");
        get_userinput();
        return -1;
    }

    if (fp = fopen("ToDo.txt", "r")){
        fclose(fp);
        while (keypressed != 'y' && keypressed != 'n') {
            printf("The file already exist\n");
            printf("Do you want to overwrite it? Choice y / n.\n");
            keypressed = 'x';
            keypressed = getch(stdin);
            if (keypressed == 'n') {
                get_userinput();
                return 0;
            }
        }
    }

    fp = fopen("ToDo.txt", "w+");
    for (int i = 0; i < task_counter; i++) {
        fprintf(fp, "task[%d]: %s\n",i+1, var[i].taskname);
    }
    fclose(fp);
    printf("Tasks written to file\n");
    get_userinput();
    return 0;
}
