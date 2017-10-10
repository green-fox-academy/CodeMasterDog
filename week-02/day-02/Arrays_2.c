#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	//TODO:
    // Print out the two arrays character-by-character
    printf("char_array: \n");
    for(int i=0; i<4; i++){
        printf("%c", char_array[i]);
    }
    printf("\n\nchar_array_the_same: \n");
    for(int i=0; i<4; i++){
        printf("%c", char_array_the_same[i]);
    }
	//TODO:
    // What is the difference between the arrays?
    return 0;
}
