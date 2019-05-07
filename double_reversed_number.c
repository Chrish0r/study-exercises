#include <stdio.h>
#include <stdlib.h>

int re_umgekehrt(int num);

int main() {
    int zahl, i, stellen, umgekehrt = 0, original, re_reversed;
    scanf("%d", &zahl);

    original = zahl;

    for (i = 1; zahl != 0; i++) {
        stellen = zahl % 10;
        umgekehrt += stellen;
        umgekehrt *= 10;
        zahl /= 10;
    }
    umgekehrt /= 10; // letzte Iteration "bereinigen"

    printf("%d\n", umgekehrt);

    re_reversed = re_umgekehrt(umgekehrt);
     printf("%d\n", re_reversed);

    return 0;
}

int re_umgekehrt(int num) {
    int counter, digits, reversed = 0;

    for (counter = 0; num != 0; counter++) {
        digits = num % 10;
        reversed += digits;
        reversed *= 10;
        num /= 10;
    }
    reversed /= 10;

    return reversed;
}
