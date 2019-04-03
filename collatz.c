#include <stdio.h>

int main() {
    int n, count;
    count = 1;
    scanf("%d", &n);

    for (count = 1; n > 1; count++) {
        if (n % 2 == 0) {
            n /= 2;
		´} else if (n % 2 != 0) {
            n = 3 * n + 1;
        }
    }
    printf("%d", count);

    return 0;
}
