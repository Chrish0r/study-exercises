#include <stdio.h>

int armstrong(int zahl) {
    int laenge = 0, summe = 0, stelle, i, original;

    original = zahl;

    while(zahl != 0) {
        zahl /= 10;
        laenge++;
    }

    zahl = original;

    for (i = 0; zahl != 0; i++){
        stelle = zahl % 10;
        summe = summe + potenz(stelle, laenge); //zur Berechnung der einzelnen Summanden - KG gilt.
        // printf("%d\n", potenz(stelle, laenge));
        zahl /= 10;
    }

    if (original == summe) {
        return 1;
    }
    else {
        return 0;
    }
}

int potenz(int basis, int exponent) {
    int erg = 1, i;

    for (i = 0; i < exponent; i++) {
        erg *= basis;
    }
    return erg;
}

int main()
{
    int untergrenze, obergrenze, i;

    printf("Bitte geben Sie eine Unter-und Obergrenze ein:\n");
    scanf("%d %d", &untergrenze, &obergrenze);

    printf("Folgende Zahlen bzgl. ihrem Intervall sind Armstrongzahlen:\n");

    for (i = untergrenze; i <= obergrenze; i++) {
          if (armstrong(i)) {
                printf("%d\n", i);
        }
    }

    return 0;
}
