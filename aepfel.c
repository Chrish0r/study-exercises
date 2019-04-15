#include <stdio.h>

int main(void) {
    int i, aepfel, fritz = 5, hans = 3, fritz_gesamt = 0, hans_gesamt = 0;
    printf("Wieviele Aepfel kaufen Hans und Fritz?\n");
    scanf("%d", &aepfel);

    if (aepfel % 8 == 0) {
        for (i = 1; aepfel > 0; i++) {
            aepfel = aepfel - (fritz + hans);
            fritz_gesamt += fritz;
            hans_gesamt += hans;
            printf("%s %5d | %s %5d | %s %5d\n", "Fritz:", fritz_gesamt, "Hans:", hans_gesamt, "Aepfel:", aepfel);
        }
    }
    return 0;
}
