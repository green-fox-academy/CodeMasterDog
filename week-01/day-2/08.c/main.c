#include <stdio.h>

int main() {
	int h1 = 350;
	int h2 = 200;
	// tell if the double of h2 is bigger than h1
	printf("Mondd meg, ha h2 duplaja nagyobb, mint h1 \n");
	printf("h1= %d", h1  ); printf(" h2= %d \n", h2);
	if (h2*2>h1) {
       printf("h2 duplaja nagyobb, mint h1");
	}
	/* //if we want else branch...
	else {
        printf("h2 duplaja kisebb, mint h1");
    }
    */
	return 0;
}
