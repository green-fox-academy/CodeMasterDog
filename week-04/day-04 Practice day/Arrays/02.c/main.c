#include <stdio.h>
#include <stdlib.h>
//fill and print out abc from a to z, and A to Z in a function
void fill_and_print();

int main()
{
    fill_and_print();

    return ;
}

void fill_and_print()
{
    int array1[52];

    for(int i = 0; i < 52; i++) {
        array1[i] = 97 + i;        
        if (i == 26)
            printf("\n");
        if (i >= 26)
            array1[i] = i + 39;
        printf("%c ", array1[i]);
    }
}
