#include <stdio.h>
#include <stdlib.h>
void print_menu_src();

typedef struct Task {
  char taskname[40];
  int   priority;
}TASKS;

int main()
{

    print_menu_src();

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
