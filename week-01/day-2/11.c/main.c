#include <stdio.h>

int main() {
	int k = 1521;
	// tell if k is dividable by 3 or 5
	printf("K=1521, 3 vagy 5 osztoja? \n");
	if ((k%3==0)||(k%5==0)){
         printf("Igen, 3 vagy 5 osztoja k-nak.\n");
	}

	return 0;
}
