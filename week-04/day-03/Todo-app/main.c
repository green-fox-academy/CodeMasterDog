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
void create_file(char*, TASKS*);
//TASKS add_new_task(enum prog, char, int);
void add_new_task(TASKS *, char* , int, int);
void list_tasks(TASKS* );

int task_counter = 0;

int main()
{
    char temp_name[40] = "";
    char temp_name2[40] = "masodik feladat";
    int ln = 0;
    int temp_prio = 0;
   // enum progression temp_enum = have_not_started_yet;


    TASKS tskk[10];
    print_menu_src();
    puts("Enter task name");
    gets(temp_name);
    ln = strlen(temp_name);
    puts("Enter task priority");
    getc(temp_prio);
    //add_new_task(enum progression, temp_name ,temp_prio );
    add_new_task(tskk, temp_name, temp_prio, ln);
    add_new_task(tskk, temp_name2, temp_prio, ln);
    FILE *myfile = "test.txt";
    create_file(myfile, &tskk);
    list_tasks(tskk);
    //just for check
    //printf("task name is :%s\n", tskk.taskname);
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



  void create_file(char* file_path,  TASKS* var) {
    FILE *fh = fopen(file_path, "a+"); //"w+"
    if (fh == NULL) {
        printf("Could not create file: %c", file_path);
        return;
    }
    TASKS tskk;
    char abc[10];



    strcpy (abc, var->taskname);
    //printf("creat f abc: %s\n", abc);
    //printf("\n2. from create file: %s", var->taskname);
    for (int i = 0; i< task_counter; i++) {

    fprintf(fh, "%s \n",  var[i].taskname);
       // printf("\nkapja mar beeee: %s \n", var[0].taskname);
    printf("\ntest print from create file fn task[nr]: %s \n", var[i].taskname);
    }

   // fprintf(fh, "%s \n", var->taskname);
    fclose(fh);
}


void add_new_task(TASKS *tskk, char *name, int prio, int len)
{
    strcpy (tskk[task_counter].taskname, name);
    task_counter++;
}

void list_tasks(TASKS* var)
{
  for (int i = 0; i <task_counter; i++) {
    printf("%d. task: %s\n",i+1, var->taskname);
  }
}
