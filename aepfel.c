#include <stdio.h>

int main(void) {
    int i, aepfel, fritz = 0, hans = 0;
    printf("Wieviele Aepfel kaufen Hans und Fritz?\n");
    scanf("%d", &aepfel);

    if (aepfel % 8 == 0) {
        for (i = 1; aepfel > 0; i++) {
            aepfel = aepfel - 8;
            fritz += 5;
            hans += 3;
            printf("Runde: %3d  Fritz: %3d  Hans: %3d  Aepfel: %3d\n", i, fritz, hans, aepfel);
        }
    }
    return 0;
}

