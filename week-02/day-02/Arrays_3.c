#include <stdio.h>

int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73, 15, 5.55, 5};
   	//TODO:
    // Print out the content of the arrays
    printf("int_array: \n");
    for (int i=0; i<5; i++){
        printf("%d, ", int_array[i]);
    }

    printf("\n\nfloat_array: \n");
    for (int i=0; i<sizeof(float_array)/sizeof(float_array[0]);i++){
        printf("%.3f, ", float_array[i]);
    }
    printf("\n\n");
    return 0;
}