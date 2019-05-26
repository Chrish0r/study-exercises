#include <stdio.h>

int berechne_freund(int zahl) {
    int moeglicher_freund = berechne_teilersumme(zahl);
    int moeglicher_freund_von_freund = berechne_teilersumme(moeglicher_freund);
    if(zahl == moeglicher_freund_von_freund && zahl != moeglicher_freund)
        return moeglicher_freund;
    else
        return 0;
}

int berechne_teilersumme(int number) {
    int i = 1, summe = 0;
    for(i = 1; i <= number / 2; i++) {  // haelfte der Zahl als Abbruchbedingung reicht, sonst kein ganzzahliger Teiler mehr moeglich.
        if(number % i == 0) {
            summe += i;
        }
    }
    return summe;
}

int main() {
    int untergrenze, obergrenze, z;

    printf("Bitte geben sie als untere Grenze eine Zahl ein: ");
    scanf("%d", &untergrenze);
    printf("Bitte geben sie als obere Grenze eine Zahl ein: ");
    scanf("%d", &obergrenze);

    printf("\n");

    for(z = untergrenze; z <= obergrenze; z++) {
        int friend = berechne_freund(z);
        if(friend > 0)
            printf("Die Zahl %d ist befreundet mit %d.\n", z, friend);
        }
    return 0;
}