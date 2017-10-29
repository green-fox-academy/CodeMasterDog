#include <stdio.h>
#include <stdlib.h>
//get two number with scanf
//calculate their sum with the function
int sum(int a, int b);
int main()
{
    int first_number = 0;
    int second_number = 0;

    puts("Please enter two numbers. (separated with space)");
    scanf("%d %d", &first_number, &second_number);
    printf("The sum of the two numbers: %d", sum(first_number, second_number));

    return 0;
}
int sum(int a, int b)
{   //it should return with the sum
    return a + b;
}
