#include <stdio.h>

int stringlen(char* field, int length) {
    int i = 0;

    while(field[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char text[100] = "Hello";

    /* #define LAENGE 100

    char array[LAENGE];

    fgets(array, LAENGE, stdin);
    */

    int laenge;
    laenge = stringlen(text, 100);

    printf("%d\n", laenge);


	return 0;
}
