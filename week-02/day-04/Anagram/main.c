#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
/*An anagram is direct word switch or word play,
the result of rearranging the letters of a word or phrase to produce a new word or phrase,
using all the original letters exactly once; for example,
the word anagram can be rearranged into nag-a-ram.

Exercise
Create a function named is anagram following your current language's style guide.
It should take two strings and return a boolean value depending on whether its an anagram or not.

/*Lopadotemachoselachogaleokranioleipsanodrimhypotrimmatosilphioparaomelitokatakechymenokichlepikossyphophattoperisteralektryonoptekephalliokigklopeleiolagoiosiraiobaphetraganopterygon
Longest word coined by a major author, the longest word ever to appear in literature contains 182 characters.
*/
char first_word[181];
char second_word[181];
int counter = 0;
void anagram_fn();


int main()
{
    anagram_fn();
    return 0;
}

void anagram_fn()
{
    printf("Please enter the first word.\n");
    scanf("%s", first_word);
    printf("Please enter the second word.\n");
    scanf("%s", second_word);
    system("cls");
    printf("The first word is: %s\n", first_word);
    printf("The second word is: %s\n", second_word);
    //printf("Size of first  word is: %d\n", strlen(first_word));
    //printf("Size of second word is: %d\n", strlen(second_word));
    printf("\n");
    if (strlen(first_word)!=strlen(second_word))
        printf("\nFalse! This is not an anagram.\n");
    else{
        for(int i = 0; i<strlen(first_word); i++){
            for(int k = 0; k<strlen(first_word); k++){
                //printf("\n%c\t %c",first_word[i],second_word[k]);
                if (first_word[i] == second_word[k])
                    counter++;
                if (counter>i+1){
                    counter=counter-1;}
                //printf("\t Controllnum: %d", counter);
                }
            }
            if (counter==strlen(first_word))
                printf("\nTrue! This is an anagram.\n");
            else
                printf("\nFalse! This is not an anagram.\n");
    }
    //printf("\n\n\ncounter is: %d", counter);
}
