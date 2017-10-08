#include <stdio.h>
#include <stdlib.h>

int main () {


   int a = 252;
   int b = 105;

   while (a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }

   }
   printf("Greatest Common Divisor= %d\n", a);
   return 0;
}
