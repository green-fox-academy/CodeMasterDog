#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Create 9  +1 arrays of characters, each should contain a word.
 * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
 * Create an array of 9 + 1pointers of chractrer type.
 * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
 * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
 * Print them out using this array of pointers.
 * Now make it so, that the Fox is Green and he jumps over the lazy dog.
 * Use the existing arrays to achive this.
 * Print it out again.
 */
int main()
{
   char array_0[] = "The";
   char array_1[] = "Quick";
   char array_2[] = "brown";
   char array_3[] = "Dog";
   char array_4[] = "jumps";
   char array_5[] = "over";
   char array_6[] = "the";
   char array_7[] = "Lazy";
   char array_8[] = "Fox";
   char array_9[] = ".";
   char array_10[] = "Green";
   char *p_array_0 = array_0;
   char *p_array_1 = array_1;
   char *p_array_2 = array_2;
   char *p_array_3 = array_3;
   char *p_array_4 = array_4;
   char *p_array_5 = array_5;
   char *p_array_6 = array_6;
   char *p_array_7 = array_7;
   char *p_array_8 = array_8;
   char *p_array_9 = array_9;

    printf("arrays:\t\t%s %s %s %s %s %s %s %s %s%s\n", array_0, array_1, array_2, array_3, array_4, array_5, array_6, array_7, array_8, array_9);
    for (int i = 0; i < strlen(array_10); i++ ) {
        array_2[i] = array_10[i];
    }

    p_array_3 = array_8;
    p_array_8 = array_3;

    printf("p_arrays:\t%s %s %s %s %s %s %s %s %s%s\n", p_array_0, p_array_1, p_array_2, p_array_3, p_array_4, p_array_5, p_array_6, p_array_7, p_array_8, p_array_9);

    return 0;
}
