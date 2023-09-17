#include <stdio.h>

int main(void) {
    int x;
    printf("Ingrese un año: \n");
    scanf("%d", &x);
    if (x % 4 != 0 || (x % 100 == 0 && x % 400 != 0)) printf("No leap year");
      else printf("Leap year");
  return 0;
}
