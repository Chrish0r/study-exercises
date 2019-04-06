#include <stdio.h>

 int main(void) { // Raute mit 2N-1 Zeilen und Spalten
     int n = 5;
     int z, s;

     for(z = 1; z <= n; z++) {
        printf("%*s", n-z, "");
        for(s = 1; s < z * 2; s++){
            printf("*");
        }
        printf("\n");
     }
     for(z = n; z > 1; z--) {
        printf("%*s", n - (z - 1), "");
        for(s = 1; s < z * 2 - 2 ; s++) {
            printf("*");
        }
        printf("\n");
     }
     return 0;
 }
