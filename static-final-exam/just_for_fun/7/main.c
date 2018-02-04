#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
/*Create a function that takes a string and a letter,
 *than returns the count of occurrence of that letter in the string
 */

uint8_t find_occurrence(char[], uint8_t, char);

int main()
{
    char find_me = 's';
    char str[] = "Count the occurrence of the given character ssss...";
    uint8_t lenght = strlen(str);

    printf("String:\t\t\"%s\"\n\
           \rSearched char.:\t\"%c\"\n\
           \rOccurrence:\t%d\n", str, find_me, find_occurrence(str, lenght, find_me));
    return 0;
}

uint8_t find_occurrence(char var[], uint8_t len, char find)
{
    uint8_t counter = 0;

    for (uint8_t i = 0; i < len; i++) {
        if (var[i] == find)
            counter++;
    }
    return counter;
}
