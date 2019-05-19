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
    int number;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &number);

    if (armstrong(number)) {
        printf("Die Zahl %d ist eine Armstrongzahl.\n", number);
    }
    else {
        printf("Die Zahl %d ist keine Armstrongzahl.\n", number);
    }

    return 0;
}
