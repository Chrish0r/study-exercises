#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, hoehe, einrueckung, j;

    printf("Bitte geben sie die hoehe des Dreiecks ein:\n");
    scanf("%d", &hoehe);

    for (i = 1; i <= hoehe; i++) {
        einrueckung = hoehe - i;
        printf("%*s", einrueckung, "");
        for(j = 1; j < 2 * i; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
