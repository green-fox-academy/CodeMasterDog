#include <stdio.h>
#include <string.h>

int main() {
    //TODO:
    // Print out the array character-by-character
    char my_name_array[25];
    puts("Enter your name:");
    gets(my_name_array);
    int length_of_name = strlen(my_name_array);

    for (int i=0; i<length_of_name; i++){
        printf("%c", my_name_array[i]);
    }
    return 0;
}