#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
/*
////-----POINTER FOR NUMBERS(ARRAYS)-----\\\\
Every task should be in different function, and use pointers
1, Fill your array with numbers from 0 to N
2, count numbers, who has hundreds place is 1 and ones place is 3 (103,113 ...) return with the count and print out in the main()
3, sum the full!! arrays elements return with it, and print out in the main()
4, sum the arrays elements, which has divided by 4, and return with their avarage, print out in the main()
*/

void fill_arr(int *, int);
int count_umbers(int *, int);
int sum(int *, int);
float divided_4_and_avg(int *, int);

int main()
{
    int number = 0;
    int array1[1024];

    do {
        puts("Give me a number to fill array (max 1023)");
        scanf("%d", &number);
    } while (number > 1023);

    system("cls");
    fill_arr(array1, number);
    /*
    //print every element's value
    for (int i = 0; i < number+1; i++) {
        printf("Array's element array[%d] = %d\n",i , array1[i]);
    }
    */
    printf("You have %d elements. (from 0 - %d)\n", number+1, number);
    printf("Number of selected elements : %d\n", count_numbers(array1, number));
    printf("Sum of all the elements of the array: %d\n", sum(array1, number));
    printf("The AVG of those elements which can be divided by 4: %.2f\n", divided_4_and_avg(array1, number));

    return 0;
}

void fill_arr(int *arrelement, int lenght)
{
    for (int i = 0; i < lenght + 1; i++) {
        arrelement[i] = i;
    }
}

int count_numbers(int *arrelement, int lenght)
{
    char str[50] ="";
    int counter = 0;
    for (int i = 0; i < lenght; i++) {
        itoa(arrelement[i], str, 10);
        if (strlen(str) == 3 && str[strlen(str) - 1] == '3' && str[strlen(str) - 3] == '1') {
            printf("%s\n", str);
            counter++;
        }
    }
    return counter;
}

int sum(int *arrelement, int lenght)
{
    int result = 0;
    for (int i = 0; i < lenght + 1; i++) {
        result = result + arrelement[i];
    }

    return result;
}

float divided_4_and_avg(int *arrelement, int lenght)
{
    int counter = 0;
    int sum = 0;

    for (int i = 0; i < lenght + 1; i++) {
        if (arrelement[i] % 4 == 0) {
            //printf("arrelement[%d] can be divided without residue %d\n", i, arrelement[i]);
            sum = sum + arrelement[i];
            counter++;
        }
    }
    //printf("counter = %d\n", counter);
    printf("Sum of those elements which can be divided by 4 = %d\n", sum);

    return sum / counter;
}
