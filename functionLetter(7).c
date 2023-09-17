#include <stdio.h>

int letter(char x);

int letter(char x) {
    if (x >= 'A' && x <= 'Z') return 1;
    else return 0;
}
