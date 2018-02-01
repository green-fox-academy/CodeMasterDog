#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <unistd.h>

typedef struct Task {
    enum progression {HAVE_NOT_STARTED_YET, IN_PROGRESS, FINISHED};
    char taskname[40];
    int priority;
}TASKS;

int get_userinput();
void add_new_task(TASKS *, char* , int);
void list_tasks(TASKS *);
void print_menu_src();
int create_file(TASKS *);
void remove_task(TASKS *, char []);










#endif // FUNCTIONS_H_INCLUDED
