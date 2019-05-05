#include <stdio.h>

int main() {
    int z, s, n;
    
    scanf("%d", &n);

    for(z = n/2; z >= 0; z--) {
        printf("%*s", z, "");
        for (s = 1; s <= n - (2 * z); s++) {
            printf("*");
        }
        printf("\n");
    }

    for(z = 1; z <= n/2; z++) {
        printf("%*s", z, "");
        for (s = 1; s <= n - 2 * z; s++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
