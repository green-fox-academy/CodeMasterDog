/*
 * array_function_03.c
 *
 * Create a function that takes an array of array of characters and returns an array of integers each representing the
 * lenght of the given character array in the first array.
 * Say your input is this: {"Good", "Morning", "Vietnam"}
 * Your output should be this: {4, 7, 7}.
 * HINT: strings are terminated with a special character: '\0'.
 * So, "Good" as an array of characters would look like this: {'G', 'o', 'o', 'd', '\0'}.
 *
 * In the main function create code that demonstrates that Your function works approrpiately.
 */

#include <stdio.h>
#include <stdlib.h>

int return_lenght(char ** var, int);

int main()
{

    char *words[] = {"Good", "morning", "Vietnam"};
    int num_of_elements = sizeof words / sizeof(words[0]);
    int *result = return_lenght(words, num_of_elements);

    printf("{");
        for (int i = 0; i < num_of_elements; i++) {
            printf("%d, ", result[i]);
        }
    printf("\b\b}");

    return 0;
}

int return_lenght(char **var, int elements)
{
    static int result[30];
    for (int i = 0; i < elements; i++) {
        result[i] = strlen(var[i]);
    }

    return result;
}
