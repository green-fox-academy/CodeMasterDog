#include <stdio.h>
#include <stdlib.h>
#include <string.h>
create_palindrome();
char mkpal[256];
/*Palindrome builder
What the hell is a palindrome?
A palindrome is a word, phrase, number,
or other sequence of characters which reads
the same backward as forward, such as madam or racecar.
Create a function named create palindrome following your current language's style guide.
It should take a string, create a palindrome from it and then return it.
input	    output
""          ""
"greenfox"	"greenfoxxofneerg"
"123"	    "123321"
*/
int main()
{
    create_palindrome();
    return 0;
}

int create_palindrome()
{
    printf("Please enter a sequence of characters:\n");
    scanf("%s", mkpal);
    system("cls");
    printf("This sequence will be transformed to a palindrome:\n%s\n", mkpal);
    printf("\nYour palindrome:\n", mkpal[100]);
    printf("%s", mkpal);
    for(int i = sizeof(mkpal)-1; i>-1; i--){
        if (mkpal[i] != 0)
            printf("%c", mkpal[i]);
        }
    printf("\n");
}
