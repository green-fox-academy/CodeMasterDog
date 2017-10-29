#include <stdio.h>
#include <stdlib.h>

void fill_and_print(int *, int, int);
//fill and print out abc from a to z, and A to Z in a function with pointers
int main()
{
    int array1[52];
    int num = 'a';
    int ln = sizeof(array1) / sizeof(array1[0]);

    fill_and_print(array1, num, ln);

    return ;
}

void fill_and_print(int *arridx, int number, int lenght)
{
    for(int i = 0; i < lenght; i++) {
        arridx[i] = 'a' + i;
        if (i == 26)
            printf("\n");
        if (i >= 26)
            arridx[i] = i + 39;
        printf("%c ", arridx[i]);
    }
}
