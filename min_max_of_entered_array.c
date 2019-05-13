#include <stdio.h>

int max(int *field, int length) {
    int max = field[0], i;

    for(i = 1; i < length; i++) {
        if (field[i] > max) {
            max = field[i];
        }
    }
    return max;
}

int min(int *field, int length) {
    int min = field[0], i;

    for(i = 1; i < length; i++) {
        if (field[i] < min) {
            min = field[i];
        }
    }
    return min;
}

int main(void) {
    #define LAENGE 10

    int array[LAENGE];
    int input, i, minimum, maximum;

    printf("Please enter ten whole numbers between 1 and 100: \n");
    for (i = 0; i < LAENGE; i++) {
        printf("%d. Wert: ", i + 1);
        scanf("%d", &input);
        array[i] = input;
      }
    maximum = max(array, LAENGE);
    minimum = min(array, LAENGE);

    printf("The greatest number is %d.\n", maximum);
    printf("The smallest number is %d.\n", minimum);

    return 0;
}
