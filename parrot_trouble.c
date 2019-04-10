#include <stdio.h>

/*
  Returns 1 if we are in trouble, and 0 otherwise.
  If talking == 1, the parrot is talking, otherwise it is silent.
  The hour is the current hour time in range 0..23.
*/
int parrot_trouble(int talking, int hour) {
    if (talking == 1) {
        if (hour < 7) {
            return 1;
           } else if (hour > 20) {
                return 1;
            }
    }

  return 0;
}

int main(void) {
  int input_talking;
  int input_hour;

  scanf("%d %d", &input_talking, &input_hour);

  if (parrot_trouble(input_talking, input_hour))
    printf("Oh no, parrot in trouble!");
  else
    printf("Everything's fine.");

  return 0;
}
