#include <stdio.h>

 int main() { //Test ob Primzahl, von 2 to 100
     int i, j;

     for(i = 2; i < 100; i++){
        for(j = 2; j <= (i/j); j++)
            if(!(i%j)) // falls es keinen Rest gibt, dann keine Primzahl
               break;
            if(j > (i/j))
                printf("%d is a prime number.\n", i);
        }

     return 0;
}
