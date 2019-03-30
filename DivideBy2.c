#include <stdio.h>

int main() {
    int count = 0;
    int num;

    scanf("%d", &num);

    if (num == 0) {
    } else {
        while (num !=1) {
        num /= 2;
        count++;
        }
    }

    printf("%d", count);

	return 0;
}
