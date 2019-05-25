#include <stdio.h>

void Zaehle_Buchstaben(char* string, int* buchstaben) {
    int i, j;

    for(i = 0; i < 26; i++) {

        for(j = 0; string[j] != '\0'; j++) {
            if(string[j] == 'A' + i || string[j] == 'a' + i) {
                buchstaben[i]++;
            }
        }
    }
}


int main(int argc, char* argv[]) {
    int i;
    int buchstaben[26] = {0};

    for(i = 1; i <= 1; i++) {  
        Zaehle_Buchstaben(argv[i], buchstaben);
    }
    for(i = 0; i < 26; i++) {
         if(buchstaben[i] > 0) {
            printf("%c: %d\n", 'A' + i, buchstaben[i]);
        }
    }
    return 0;
}
