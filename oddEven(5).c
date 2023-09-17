#include <stdio.h>

int oddEven(int x);

int main(void) {
    int x, ans;
    printf("Ingrese un número: ");
    scanf("%d", &x);
    ans = oddEven(x);
    if (ans == 0) printf("El número es par");
    else printf("El número es impar");
    return 0;
}

int oddEven(int x) {
    if (x % 2 == 0)
        return 0;
    else
        return 1;
}
