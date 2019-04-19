#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, tag, monat, jahr, vergangene_tage = 0;

    printf("Bitte geben Sie ein Datum in der Form TT.MM.JJJJ ein:\n");
    scanf("%d.%d.%d", &tag, &monat, &jahr);

    for(i = 1; i < monat; i++) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                vergangene_tage += 31;
                break;
            case 2:
                if (jahr % 400 == 0 || (jahr % 4 == 0 && jahr % 100 != 0)) {
                    vergangene_tage += 29;
                 } else {
                    vergangene_tage += 28;
                 }
                break;
            default:
                vergangene_tage += 30;
        }
    }

    vergangene_tage = vergangene_tage + (tag - 1);

    printf("Seit dem %d.%d.%d sind %d Tage vergangen, gerechnt vom 01.01 des selben Jahres", tag, monat, jahr, vergangene_tage);

    return 0;
}

