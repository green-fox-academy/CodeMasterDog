#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "This is a sample string";
	//13.cTODO: write a program which prints out the distance between the first and last occurance of character 's'
	//strrchr   Locate last occurrence of character in string (function )
	//strchr    Locate first occurrence of character in string (function )
	printf("\n%s\n", str);
	printf("\n\nThe distance between the first and last occurance of character 's': %d\n\n", (strrchr(str,'s')-str+1)-(strchr(str,'s')-str+1)-1);
    return 0;
}
