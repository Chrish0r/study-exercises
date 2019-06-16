#include <stdio.h>
void swap(int* num1, int* num2);
int ggT(int* num1, int* num2);

int main() {
    int zahl1, zahl2;

    printf("Bitte geben Sie zwei ganze Zahlen ein:\n");
    scanf("%d %d", &zahl1, &zahl2);

    if(zahl1 == 0 || zahl2 == 0) {
        printf("Es gibt keinen groessten gemeinsamen Teiler, weil eine der beiden Zahlen die Null ist.\n");
    } else {
        printf("Der groesste gemeinsame Teiler von den Zahlen %d und %d ist: %d.\n", zahl1, zahl2, ggT(&zahl1, &zahl2));
        //printf("zahl1 ist %d. zahl2 ist % d.\n", zahl1, zahl2); // Test, ob swap_Funktion korrekt ausgefuehrt ist.
    }
        return 0;
}

void swap(int* n1, int* n2) {
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int ggT(int* num1, int* num2) {
    int i, ggT;

    if(*num1 > *num2) {
        swap(num1, num2);
    }

    for(i = 1; i <= *num1; i++) {
        if((*num1 % i == 0) && (*num2 % i == 0)) {
            ggT = i;
        }
    }
    return ggT;
}