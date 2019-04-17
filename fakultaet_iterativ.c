#include <stdio.h>

int main() {

    int i, n, fak;
    scanf("%d", &n);

    fak = n;

    if ( n == 1 | n == 0) {
        printf("%d", 1);
    } else {
        for (i = (n-1); i >= 1; i--) {
            fak *= i;
        }
        printf("%d", fak);
    }


     return 0;
}