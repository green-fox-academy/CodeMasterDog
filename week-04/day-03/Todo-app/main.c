#include <stdio.h>
#include <stdlib.h>
void print_menu_src();
void create_file(char*);

enum progression {have_not_started_yet, in_progress, finished};

typedef struct Task {
    enum progression inprog;
    char taskname[40];
    int   priority;

}TASKS;

int main()
{
    FILE *myfile = "test.txt";
    print_menu_src();
    create_file(myfile);
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
