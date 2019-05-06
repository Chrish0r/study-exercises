#include <stdio.h>

int main() {
int z, s;
char c;

for (z = 33; z <= 45; z++) {
    for (s = z; s <= 122; s = s + 13) {
        printf("%3d%3c%3s", s, s, "|");
        if (s > 122)
            break;
    }
    printf("\n");
}

  return 0;
}