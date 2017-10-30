#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

typedef struct Task {
  //enum progression {have_not_started_yet, in_progress, finished};
  //  enum progression inprog;
    char taskname[40];
    int   priority;

}TASKS;

int get_userinput();
void add_new_task(TASKS *, char* , int, int);
void list_tasks(TASKS* );
void print_menu_src();
void create_file(char*, TASKS*);









#endif // FUNCTIONS_H_INCLUDED
