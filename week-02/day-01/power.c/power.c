#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// create a function which returns the power of a base number


int main()
{
    int base = 2;
    int power = 7;
    printf("\n%d ^ %d = %d\n", base, power,power_fn(base,power));
    return ;
}

int power_fn(int b, int p)
{
 return pow(b,p);
}
