#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    //TODO:
    // Get the user's name with scanf
    puts("Please enter your name");
    scanf("%s",&buffer);
    //TODO:
    // Print it out with printf
    printf("\n\nYour name is: %s\n\n", buffer);
    return 0;
}