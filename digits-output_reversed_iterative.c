#include <stdio.h>
#include <stdlib.h>

int digits_reversed_iterative(int num) {
int erg, reversed, digit, i;

reversed = 0;

for (i = 0; num != 0; i++) {
    digit = num % 10;
    reversed += digit;
    reversed *= 10;
    num /= 10;
}

    reversed /= 10; // letzte iteration "bereinigen"
    return reversed;
}

int main() {
    int zahl;

    printf("Bitte geben Sie eine ganze Zahl ein:\n");
    scanf("%d", &zahl);

    printf("The reversed output of %d is %d.\n", zahl, digits_reversed_iterative(zahl));
}
