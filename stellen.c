#include <stdio.h>
#include <stdlib.h>


int main() {
   int zahl, original, stellen = 0, s, umgekehrt = 0;
   printf("Bitte Zahl eingeben: ");

   scanf("%d", &zahl);
   original = zahl;

   do {
    s = zahl % 10;
    printf("%d\n", s);

    zahl /= 10;
    stellen++;

    umgekehrt += s;
    umgekehrt *= 10;
   } while (zahl > 0);

   umgekehrt /= 10;

   printf("Die Zahl %d hat %d Stellen.\n", original, stellen);
   printf("Die umgekehrte Zahl ist %d\n", umgekehrt);

   return 0;
}
