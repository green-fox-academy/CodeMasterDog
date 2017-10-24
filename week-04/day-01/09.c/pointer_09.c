#include <stdio.h>
void safe_union(int *, int, int *, int, int *, int);
    //09.c
    //TODO:
    // Implement this function to create the union of a and b into the array result!

int main(int argc, char** argv) {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6, 7, 8, 9, 10};
    int c[30];

    int l_a = sizeof(a) / sizeof (int);
    int l_b = sizeof(b) / sizeof (int);
    int l_c = l_a + l_b;

    safe_union(a, l_a, b, l_b, c, l_c);

    for (int i = 0; i< l_a + l_b; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}

void safe_union(int *var_a, int l_var_a, int *var_b, int l_var_b, int *result, int l_res)
{
    for (int i = 0; i < l_res; i++) {
        *(result+i) = var_a[i];
        if (i >= l_var_a)
            *(result+i) = var_b[i-l_var_a];
    }
    // Implement this function to create the union of a and b into the array result!
}
