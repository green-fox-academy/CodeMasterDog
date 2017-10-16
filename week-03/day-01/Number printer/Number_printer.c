#include <stdio.h>
#include <stdint.h>

void printf_numbers( int from,  int to)
{
    // changed i to unsinged
	for (unsigned int i = from; i < to; i++)
        //changed %d to %u
		printf("%u,", i);
}

int main()
{
	printf_numbers(2147483600, 2147484600);
	return 0;
}
