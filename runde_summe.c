#include <stdio.h>
#include <stdlib.h>

void betrag(int* zahl);
void sort(int* a, int* b);
void runde_summe(int* a, int* b, int* c, int* summe);

/*
int main() {
    int x, y, z, summe;

    scanf("%d %d %d", &x, &y, &z);

    runde_summe(&x, &y, &z, &summe);
    printf("%d", &summe);

    return 0;
}
*/

void betrag(int* zahl) {
    if (*zahl < 0) {
        *zahl = (-1) * *zahl;
    }
}

void sort(int* a, int* b) {
    if (*a > *b) {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void runde_summe(int* a, int* b, int* c, int* summe) {
    int last_digit;

    betrag(a);
    betrag(b);
    betrag(c);

    while (*a > *b || *b > *c) {
    sort(a, b);
    sort(b, c);
    }

    *summe = *a + *b + *c;
    last_digit = *summe % 10;

    if (last_digit >= 5) {
        *summe += 10 - last_digit;
    } else {
        *summe -= last_digit;
    }
}
