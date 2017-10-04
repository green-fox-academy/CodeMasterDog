#include <stdio.h>
#include <math.h>

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	printf("Tell if j1 is higher than j2 squared and smaller than j2 cubed \n");
	//printf("j1 a negyzeten: %f ", pow(j1,2));printf("j2 a negyzeten: %f \n", pow(j2,2));
	//printf("j2 a negyzeten: %f \n ", pow(j2,3));
	if (j1>pow(j2,2)&&j1<pow(j2,3)){
    printf("Hey, j1 is higher than j2 squared, and smaller than j2 cubed! \n");
	}
	return 0;
}
