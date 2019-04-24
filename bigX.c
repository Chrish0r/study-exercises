#include <stdio.h>
#include <stdlib.h>

int main() {
    int z, s, leer_li, leer_re, n;
    printf("Please enter the number of rows: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
            for (z = 1; z <= n/2; z++) {
                printf("%*s", z - 1, "");
                printf("*");
                printf("%*s" , n - 2 * z, "");
                printf("*\n");
                }

                printf("%*s", z - 1, "");
                printf("*\n");

                for (z = n/2; z >= 1; z--) {
                    printf("%*s", z - 1, "");
                    printf("*");
                    printf("%*s" , n - 2 * z, "");
                    printf("*\n");
                    }
            } else {
                for (z = 1; z < n/2; z++) {
                    printf("%*s", z - 1, "");
                    printf("*");
                    printf("%*s", n - 2*z, "");
                    printf("*\n");
                }

                for (leer_li = 1; leer_li <= 2; leer_li++) {
                    printf("%*s", z - 1, "");
                    printf("**\n");
                }

                for (leer_li = n/2 - 2; leer_li >= 0; leer_li--) {
                    printf("%*s", leer_li, "");
                    printf("*");
                    printf("%*s", (n - 2) - 2 * leer_li, "");
                    printf("*\n");


                }

            }

   return 0;
}
