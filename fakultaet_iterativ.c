#include <stdio.h>

int main() {

    int i, n, fak;
    scanf("%d", &n);

    fak = 1;

    if ( n <= 1) {
        printf("%d", fak);
    } else {
        for (i = 1; i <= n; i++) {
            fak *= i;
        }
        printf("%d\n", fak);
    }

     return 0;
}
