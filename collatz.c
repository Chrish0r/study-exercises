#include <stdio.h>

int main(void) {
    int n, count;
    count = 1;
    scanf("%d", &n);


    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
            count++;
        } else if (n % 2 != 0) {
            n = 3 * n + 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
