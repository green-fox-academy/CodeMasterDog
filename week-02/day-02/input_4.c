#include <stdio.h>
#include <string.h>
void func();

int main()
{   //input_4.c
    //write a void function which asks for a number with scanf and print it out with printf,
    //then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem
    func();

    return 0;
}

void func()
{
    puts("Enter a number");
    int tmp =0;
    scanf("%d", &tmp);
    printf("\nThe number you entered was: %d\n", tmp);
    puts("Now, please enter a name");
    char tmp2[50] = "asd";
    getchar();
    gets(tmp2);
}