#include <stdio.h>

int letter(char x);

int main(void){
    char x;
    int ans;
    printf("Ingrese una letra: ");
    scanf("%c", &x);
    ans = letter(x);
    if (ans == 1)
        printf("La letra es Mayuscula");
    else
        printf("La letra es Minuscula");
}

int letter(char x) {
    if (x >= 'A' && x <= 'Z') return 1;
    else return 0;
}
