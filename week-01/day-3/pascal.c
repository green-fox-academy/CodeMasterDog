#include <stdio.h>
int main()

/* pascal.c
create a program which draws a diamond, like this:
123456*
1234* * *
12* * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

//6   1
//4   3
//2   5
//0   7


{

    for (int a =6; a>-8; a= a-1){




        switch (a){
            case 6:
                printf("      ");
                int i = 1;
                    while (i+a<8){
                        printf("* ");
                        i++;
                    }
                printf("\n");
                break;

            case 4:
                printf("    ");
                int i2 = 1;
                    while (i2+a<8){
                        printf("* ");
                        i2++;
                    }
                printf("\n");
                break;

            case 2:
                printf("  ");
                int i3 = 1;
                    while (i3+a<8){
                        printf("* ");
                        i3++;
                    }
                printf("\n");
                break;

            case 0:
                for (int i = 2; i|=0; i--){
                    printf("");
                    int i4 = 1;
                        while (i4+a<8){
                            printf("* ");
                            i4++;
                        }
                    printf("\n");
                }
                break;

            case -2:
                printf("  ");
                int in2 = 1;
                    while (in2+a<4){
                        printf("* ");
                        in2++;
                    }
                printf("\n");
                break;

            case -4:
                printf("    ");
                int in4 = 1;
                    while (in4+a<0){
                        printf("* ");
                        in4++;
                    }
                printf("\n");
                break;

            case -6:
                printf("      ");
                int in6 = 1;
                    while (in6+a<-4){
                        printf("* ");
                        in6++;
                    }
                printf("\n");
                break;

    return 0;
        }

    }

}
