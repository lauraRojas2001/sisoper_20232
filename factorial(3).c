#include <stdio.h>

int main(void) {
    int x, ans = 1;
    printf("Ingrese un número: \n");
    scanf("%d", &x);
    for (int i = x; i > 1; i--){
      ans = ans * i;
    }
    printf("El factorial es %d", ans);
  return 0;
}
