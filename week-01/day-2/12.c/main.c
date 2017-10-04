#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t a = 60;
    uint8_t b = 0b00111100;
    uint8_t c = 0x3C;
    uint8_t d = 0x3c;

    printf("------------------\n", d);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("------------------\n", d);

    // Try with %x
    printf("%x \n", a);
    printf("%x \n", b);
    printf("%x \n", c);
    printf("%x \n", d);
    printf("------------------\n", d);






    // Multiply a by 2
    printf("%x \n", a*2);
    printf("------------------\n", d);
    // Shift left b by 1
    printf("ez:\n%c", (b & 0b00000001 ? '1' : '0'));
    printf("az:\n%c", (a & 0b00000001 ? '1' : '0'));

   // printf("ez: %c \n", b);
    // Check their values
    printf("%d\n", a);
    printf("%d\n", b);
    printf("------------------\n", d);

    return 0;
}
