#include <stdio.h>

int power(int x, int i);

int main(void) {
    int x, i, ans;
    printf("Ingrese el número base al que desea calcularle la potencia: ");
    scanf("%d", &x);
    printf("Ingrese la potencia: ");
    scanf("%d", &i);
    ans = power(x, i);
    printf("%d", ans);
    return 0;
}

int power(int x, int i) {
    if (i != 0)
        return (x * power(x, i - 1));
    else
        return 1;
}
