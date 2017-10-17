#include <string.h>
int main ()
{
	char string[55] ="This is a string for testing";
	char *p;

	//12TODO: write a program, which lists all position where character 'i' is found

	for (int i = 0; i < 55; i++) {
        if (string[i] == 'i')
            printf("'i' is in the %dth position\n", i);           
	}
	return 0;
}
