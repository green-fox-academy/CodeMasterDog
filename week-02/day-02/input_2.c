#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    //TODO:
    // Get the user's name with gets
    puts("Please enter your name");
    gets(buffer);
    //TODO:
    // Print it out with puts
    puts(buffer);
    //TODO:
    // Get the user's pet name with getch

   puts("enter your pet's name:");
   int i= 0;
   char pet[20];

   puts("your pet's name is:");
   for (int i = 0; i < 255; i++){
        char tmp = getchar();
        if (tmp != '\n'){
            buffer[i]=tmp;
            //TODO:
            // Print it out
             printf("%c", buffer[i]);
             }
        else
            break;
        }
    return 0;
}