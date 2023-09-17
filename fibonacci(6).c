#include <stdio.h>

int main(void) {
    int a, b, c, x;
    printf("Ingrese un número: ");
    scanf("%d", &x);
    a = b = 1;
    printf("%d %d ",a,b);
    for(int i = 1; i <= x-2; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
