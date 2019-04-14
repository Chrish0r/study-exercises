#include <stdio.h>

int main(void) {
    int i, aepfel, fritz = 5, hans = 3;
    printf("Wieviele Aepfel kaufen Hans und Fritz?\n");
    scanf("%d", &aepfel);

    if (aepfel % 8 == 0) {
        for (i = 1; aepfel > 0; i++) {
            aepfel = aepfel - (fritz + hans);
            printf("%s %d %12s %d %14s %d\n", "Fritz:", fritz, "Hans:", hans, "Aepfel:", aepfel);
        }
    }
    return 0;
}
