#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
/*
////-----POINTER FOR STRINGS-----\\\\
Every task should be in different function, and use pointers
1, fill your string with your name, sum the length of your array, return with the length, print it out in the main()
2, count the 'a'-s (or something else) in your string, return with it, and print out in the main() function
3, Change the capital letter to lowercase and the lowercase into capital letter - print out in the main() function
*/
int fill_array_str(char *);
int count_designated_chat(char *);
void change_letters(char *);

int main()
{
    char array_str[255];

    printf("Length of your name: %d\n", fill_array_str(array_str));
    printf("Your name contains the selected character %d times\n", count_designated_chat(array_str));
    change_letters(array_str);
    printf("After change letter capitalization: %s\n", array_str);

    return 0;
}

int fill_array_str(char *p_array_str)
{
    puts("Please, enter your name");
    gets(p_array_str);
    //printf("Your name is: %s\n", p_array_str);

    return strlen(p_array_str);
}

int count_designated_chat(char *p_array_str)
{
    char find = "";
    char temp_str[255];
    int counter = 0;

    strcpy(temp_str, p_array_str);
    puts("Which character do you want to count? (case sensitive)");
    find = getchar();

    while (strchr(temp_str, find) != NULL) {
            //printf("print az fn whilban srrchr: %s\n", temp_str);
            counter++;
            strcpy(temp_str, strchr(temp_str, find) + 1);
            //printf("counter: %d\n", counter);
    }

    return counter;
}

void change_letters(char *p_array_str)
{
    int ln = strlen(p_array_str);

    for (int i = 0; i < ln; i++) {
        if (islower(p_array_str[i]) == 0)
            p_array_str[i] = tolower(p_array_str[i]);
        else
            p_array_str[i] = toupper(p_array_str[i]);
    }
}
