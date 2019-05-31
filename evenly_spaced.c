#include <stdio.h>
#include <stdlib.h>

void sort(int* x, int* y) {
    int temp;

    if(*x > *y) {
    temp = *x;
    *x = *y;
    *y = temp;
    }
}

int is_evenly_spaced(int* a, int* b, int* c) {
    while(*a > *b || *b > *c) {
        sort(a, b);
        sort(b, c);
    }

    if((*b - *a) == (*c - *b)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int z1, z2, z3;
    printf("Bitte geben Sie drei ganze Zahlen ein: \n");
    scanf("%d %d %d", &z1, &z2, &z3);

    if(is_evenly_spaced(&z1, &z2, &z3)) {
        printf("wahr\n");
    } else {
        printf("falsch\n");
    }

    return 0;
}