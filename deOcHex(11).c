#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("Decimal: %d\n", i);
        printf("Octal: %o\n", i);
        printf("Hexadecimal: %X\n", i);
    }
    return 0;
}

