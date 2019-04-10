#include <stdio.h>

int how_successful(int drink, int food) {
    int party_quality = 0;

    if (drink >= 5) {
        if (food >= 5) {
            return party_quality = 1;
            }
        }
    if (drink >= 2 * food || food >= 2 * drink) {
        return party_quality = 2;
    } else {
		return 0;
    }
}

int main(void) {
  int tea;
  int candy;

  /* 0 = bad, 1 = good, 2 = great */
  int party = 0;

  scanf("%d %d", &tea, &candy);



  if (tea >= 5)
    if (candy >= 5)
      party = 1;

  if (tea >= 2 * candy)
    party = 2;

  if (candy >= 2 * tea)
    party = 2;

  if (tea < 5)
    party = 0;

  if (candy < 5)
    party = 0;


    /* Do not change anything below this line. */

  if (party == 0)
    printf("bad");
  else if (party == 1)
    printf("good");
  else
    printf("great");

  return 0;
}
