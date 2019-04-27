#include <stdio.h>

int cube(int *n) {
  return *n * *n * *n;
}

int main() {
    int number;

  int *pnumber;
  pnumber = &number;

  scanf("%d", &number);

  printf("%d^3 = %d\n", number, cube(pnumber));

  return 0;
}
