#include <stdio.h>
#include <stdlib.h>
//fill abc string from a to z, print out
int main()
{
    int array1[26];

    for(int i = 0; i < 26; i++) {
        array1[i] = 97 + i;
        printf("%c ", array1[i]);
    }

    return ;
}
