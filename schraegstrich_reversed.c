#include <stdio.h>

void zeichne_von_links_oben(int z, int s) {
    int i;

    for(i = z; i > 0 ; i--) {
        printf("%*s***\n", (s/z)*i + 1, "");
    }
}

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    zeichne_von_links_oben(y, x);

    return 0;
}
