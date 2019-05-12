#include <stdio.h>
#include <stdlib.h>

int maximum(int field[], int length) {
    int i, max;
    max = field[0];

    for (i = 1; i < length; i++) {
        if (field[i] > max) {
            max = field[i];
        }
    }
    return max;
}

int main() {
    int num_array[] = {12, 54, 67, 123, 823, 342, 10, 4};
    int largest = maximum(num_array, 8);

    printf("The largest number is %d.\n", largest);

    return 0;
}
