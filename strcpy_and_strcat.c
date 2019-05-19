#include <stdio.h>

int strlen(char* string) {
    int laenge = 0;
    while(string[laenge] != '\0') {
        laenge++;
    }
    return laenge;
}

void  strcpy(char* t1, char* t2) {
    int pos = 0;
    for(pos = 0; t2[pos] != '\0'; pos++) {
        t1 [pos] = t2[pos];
    }
}

void strcat(char* text1, char* text2) {
    int versatz = strlen(text1);

    strcpy(text1 + versatz, text2);
}

int main() {
    char s1[100] = "Hello";
    char s2[100] = " Welt und Universum!";

    strcat(s1, s2);

    printf("%s", s1);

    return 0;
}