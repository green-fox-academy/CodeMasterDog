#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*Task 4: Create a function that returns how many
 *characters are in a string without using `strlen()``
 */

uint8_t str_length(char str[]);
int main()
{
    char string[] = "Hello my name is Sting, and I'm a string!";
    printf("%s\n", string);
    printf("Sting is %d character long.\n", str_length(string));
    return 0;
}

uint8_t str_length(char str[])
{
    uint8_t counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;
}
