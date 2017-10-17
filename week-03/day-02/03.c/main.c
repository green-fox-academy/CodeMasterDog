#include <string.h>

int main()
{
	int a = 54325;
    char buffer[20];
    itoa(a, buffer, 2);
    printf("buffer is: %s\n", buffer);
    itoa(a, buffer, 10);
    printf("buffer is: %s\n", buffer);
    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    // Store the string in buffer
    return 0;
}
