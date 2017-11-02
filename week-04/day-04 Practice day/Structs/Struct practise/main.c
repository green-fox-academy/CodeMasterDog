//TODO:
//Create a structure called "student":
//name of the student
//number of the student's grade - error handling
//type of the student's behavior in an enumeration ("behaviors"): - BAD_BEHAVIOR , GOOD_BEHAVIOR
//The student's are stored in an array.
// Write a function that returns with the grade's avarage
// write a function that prints out if the student's grade higher than 3 and the behavior is bad:
//"(student's name) you are fuckin amazing, please behave good"
//write a function that counts good behaviors, if they have 5 grades:
//return with the count of students

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float return_grade_avg();

 enum BEHAV {
    BAD_BEHAVIOR , GOOD_BEHAVIOR
} ;

typedef struct {
    char name[50];
    int grade;
    enum BEHAV behavior;
} STUDENT;

int main()
{
    STUDENT studs[10];
    strcpy(studs[0].name, "Molnar Peter");
    studs[0].grade = 4;
    studs[0].behavior = 1;


    return 0;
}

float return_grade_avg()
{

}
