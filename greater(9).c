#include <stdio.h>

int main(void){
    int x1, x2, x3, ans = 0;
    printf("Ingrese tres números diferentes: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    if (x1 > x2 && x1 > x3) ans = x1;
    if (x2 > x1 && x2 > x3) ans = x2;
    if (x3 > x1 && x3 > x2) ans = x3;
    printf("%d es el número más grande ingresado", ans);
    return 0;
}

