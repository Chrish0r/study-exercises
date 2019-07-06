#include <stdio.h>
#include <stdlib.h>
// Programm, was eine Zahl in ein char-array umwandelt und diese auf diese Art und Weise ausgibt ,und zwar umgekehrt.

int mystrlen(int num) {
    int laenge;

    for(laenge = 0; num != 0; laenge++) {
        num /= 10;
    }
    return laenge;
}

int mystrlen2(char* s) {
    int laenge = 0;

    while(s[laenge] != '\0') {
        laenge++;
    }
    return laenge;
}

void zahl_umgekehrt_ausgeben(int num) {
    char array[mystrlen(num)];
    int stelle, i;

    for(i = 0; num != 0; i++){
        stelle = num % 10;
        array[i] = stelle + '0';
        num /= 10;
        // printf("%4c", array[i]);
    }

    for(i = mystrlen2(array); i > 0; i--) {
        printf("%4c", array[i - 1]);
    }
    printf("\n");
}

int main() {
    int zahl = 123;

    zahl_umgekehrt_ausgeben(zahl);

    return 0;
}
