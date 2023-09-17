#include <stdio.h>

int main(void) {
    int x, a;
    float y, b;
    printf("Ingrese un numero entero: ");
    scanf("%d", &x);
    printf("Ingrese un número flotante o decimal: ");
    scanf("%f", &y);
    a = x + y;
    b = (float)x + y;
    printf("Suma de ambos en tipo entero: %d\n", a);
    printf("Suma de ambos en tipo decimal o flotante: %f\n", b);
    return 0;
}
