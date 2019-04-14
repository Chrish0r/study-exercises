#include <stdio.h>

double ln2iter(double anzahl_teilsummen) {
    int i;
    double summe = 0;
    double potenz = -1, faktor = -1;
    for (i = 1; i <= anzahl_teilsummen; i++){
        potenz *= faktor;
        summe = summe + (potenz / i);
    }
    return summe;
}
 int main() {
     double n;
     double ergebnis;

     printf("Wieviele Teilsummen wollen Sie berechnen: \n");
     scanf("%lf", &n);
     ergebnis = ln2iter(n);
     printf("Der natuerliche Logarithmus von 2 mit %lf Teilsummen betraegt %lf.\n", n, ergebnis);

     return 0;
}
