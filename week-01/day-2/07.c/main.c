#include <stdio.h>

int main() {
	int g1 = 123;
	int g2 = 345;
	printf("Mondd meg, ha g1 nagyobb, mint g2 \n");
	printf("g1= %d", g1  ); printf(" g2= %d \n", g2);
	if (g1>g2) {
        printf("g1 nagyobb, mint g2");
	}
	/* //if we want else branch...
	else {
        printf("g1 kisebb, mint g2");
    }
    */
	return 0;
}
