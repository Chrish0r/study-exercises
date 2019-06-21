#include <stdio.h>
#include <stdlib.h>

int zahlenlaenge(int year) {
    int i = 0;

    while(year != 0 ) {
        year /= 10;
        i++;
    }
    return i;
}

int main() {
    enum Wochentage {SONNTAG = 0, MONTAG, DIENSTAG, MITTWOCH, DONNERSTAG, FREITAG, SAMSTAG};
    int jahr, wochentags_formel;


    do{
        printf("Bitte geben sie eine vierstellige Jahreszahl ein:\n");
        scanf("%d", &jahr);
        if(zahlenlaenge(jahr) != 4) {
            printf("Ungueltige Eingabe. Bitte erneut versuchen!\n\n");
        }
    } while(zahlenlaenge(jahr) != 4);

    wochentags_formel = (1+5 * ((jahr - 1) % 4) + 4 * ((jahr - 1)% 100) + 6 * ((jahr - 1) % 400)) % 7;

    switch(wochentags_formel) {
    case SONNTAG:
        printf("Der Wochentag am 01.01 des Jahres %d ist Sonntag.\n", jahr);
        break;
     case MONTAG:
        printf("Der Wochentag am 01.01 des Jahres %d ist Montag.\n", jahr);
        break;
     case DIENSTAG:
        printf("Der Wochentag am 01.01 des Jahres %d ist Dienstag.\n", jahr);
        break;
     case MITTWOCH:
        printf("Der Wochentag am 01.01 des Jahres %d ist Mittwoch.\n", jahr);
        break;
     case DONNERSTAG:
        printf("Der Wochentag am 01.01 des Jahres %d ist Donnerstag.\n", jahr);
        break;
     case FREITAG:
        printf("Der Wochentag am 01.01 des Jahres %d ist Freitag.\n", jahr);
        break;
     default:
        printf("Der Wochentag am 01.01 des Jahres %d ist Samstag.\n", jahr);
        break;
    }
	return 0;
}
