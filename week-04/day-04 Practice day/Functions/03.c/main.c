#include <stdio.h>
#include <stdlib.h>

void n_fctorial(int);
//write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120)
int main()
{
    int n = 0;
    puts("Give number to calculate it's factorial.");
    scanf("%d", &n);
    n_fctorial(n);

    return ;
}

void n_fctorial(int var)
{   static result = 1;

    for (int i = 0; i < var; i++) {
       result = result * (var - i);
    }

    printf("%d! = %d\n", var, result);
}
