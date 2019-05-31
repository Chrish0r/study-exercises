#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci(int x) {
    int i, erster_Summand = 0, zweiter_Summand = 1, summe;
    if(x == 0) { // statt mit else if, auch einfach zwei separate if und dann for-loop moeglich
        return 0;
    }
    else if(x == 1) {
        return 1;
    } else {
        for(i = 2; i <= x; i++) {
            summe = erster_Summand + zweiter_Summand;
            erster_Summand = zweiter_Summand;
            zweiter_Summand = summe;
        }
        return summe;
    }
}

int main() {
    unsigned int n;
    printf("Bitte geben sie ihre gewuenschte Anzahl an Fibonacci-Folgen ein: \n");
    scanf("%d", &n);

    printf("Das Ergebnis von fibonacci(%d) lautet: %d\n", n, fibonacci(n));

    return 0;
}
