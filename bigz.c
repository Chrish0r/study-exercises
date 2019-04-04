#include <stdio.h>

 int main(void) {

     int i, j, N;
     scanf("%d", &N);

     if(N > 2) {
        for(i = 1; i <= N; i++) {
            printf("*");
        }
        printf("\n");

        for(j = 2; j < N; j++) {
            printf("%*s", N - j, " " );
            printf("*\n");
        }
        for(i = 1; i <= N; i++) {
        printf("*");
        }
     }

     return 0;
 }

