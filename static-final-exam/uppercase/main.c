#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>
#include <string.h>
//9. Create a function that takes a string and changes every
// uppercase letters to lowercase letters
void TolowerCase(char*,  uint8_t);

int main()
{
    char changeString[] = "We Are The Foxes!";
    uint8_t lenght = strlen(changeString);

    TolowerCase(changeString, lenght);
    printf("%s\n", changeString);
    return 0;
}

void TolowerCase(char* str, uint8_t len)
{
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }
}

