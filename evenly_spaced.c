#include <stdio.h>
#include <stdlib.h>

int is_evenly_spaced(z1, z2, z3) {
    int min = z1, middle = z2, max = z3;

    if (z1 > max)
        max = z1;
    if (z2 > max)
        max = z2;


    if (z2 < min)
        min = z2;
    if (z3 < min)
        min = z3;


    if (z1 > min && z1 < max) {
        middle = z1;
    }
    else if (z3 < max && z3 > min) {
        middle = z3;
    }


    if((middle - min) == (max - middle)){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c, erg;

    scanf("%d %d %d", &a, &b, &c);

    erg = is_evenly_spaced(a, b, c);

    if ( erg == 1) {
         printf("%d, %d und %d sind gleich verteilt.\n", a, b, c);
    } else {
            printf("%d, %d und %d sind nicht gleich verteilt.\n", a, b, c);
            }
			
    return 0;
}