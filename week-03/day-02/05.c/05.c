#include <stdio.h>
#include <string.h>
#include <inttypes.h>

//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use
unsigned int fn_returnmynumber();

int main()
{
	int c = fn_returnmynumber();
	printf("Return value as unsigned char is: %d", (unsigned char)c );
    return 0;
}

unsigned int fn_returnmynumber()
{
    unsigned int mynum = 485;
    return mynum;
}
