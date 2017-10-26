#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//enum progression {have_not_started_yet, in_progress, finished};

typedef struct Task {
  //  enum progression inprog;
    char taskname[40];
    int   priority;

}TASKS;

void print_menu_src();
void create_file(char*);
//TASKS add_new_task(enum prog, char, int);
TASKS add_new_task(char , int);

int main()
{
    char temp_name[40] = "";
    int ln = 0;
    int temp_prio = 0;
   // enum progression temp_enum = have_not_started_yet;
    int kabbe = 0;

    TASKS tsk;
    FILE *myfile = "test.txt";
    print_menu_src();
    create_file(myfile);
    puts("Enter task name");
    gets(temp_name);
    ln = strlen(temp_name);
    puts("Enter task priority");
    getc(temp_prio);
    //add_new_task(enum progression, temp_name ,temp_prio );
    add_new_task(temp_name, temp_prio );

    return 0;
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



  void create_file(char* file_path) {
    FILE *fh = fopen(file_path, "w+");
    if (fh == NULL) {
        printf("Could not create file: %s", file_path);
        return;
    }

    fprintf(fh, "10\tthis is the multi-word string");
    fclose(fh);
}

//TASKS add_new_task(enum prog, char name, int prio)
TASKS add_new_task(char name, int prio)
{
    TASKS tsk = {name, prio};
    return tsk;
}
