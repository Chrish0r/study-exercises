#include <stdio.h>

 int main() { //Multiplikationsmatrix mit 7 Spalten und 8 Zeilen
     int i, j;
     for(i = 1; i <= 8; i++) {
        for(j = 1; j <= 7; j++) {
            printf("%5d", i * j);
        }
            printf("\n");
    }

     return 0;
 }
