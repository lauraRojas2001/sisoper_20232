#include <stdio.h>

int prime(int x);

int main(void) {
  int x;
  printf("Ingrese un número: \n");
  scanf("%d", &x);
  if (prime(x) == 0) {
    printf("Es primo");
  } else {
    printf("No es primo");
  }
  return 0;
}

int prime(int x) {
    int ans = 0;
    if (x == 0 || x == 1) ans = 0;
    else{
        for (int i = 2; i < x ; i++) {
            if (x % i == 0) ans = 1;
        }
    }
    return ans;
}

