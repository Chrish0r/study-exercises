#include <stdio.h>

int main(void) {
    int small_bars;
    int big_bars;
    int goal;

  /* Number of small bars used, -1 means it cannot be done. */
  int used_small_bars = -1;

  scanf("%d %d %d", &small_bars, &big_bars, &goal);

  if ((big_bars == 0) && (goal <= small_bars))  {
        small_bars = goal;
        printf("%d", small_bars);
      } else if (goal <= (big_bars * 5 + small_bars) &&
                 goal >= (big_bars * 5)) {
        small_bars = goal % (big_bars * 5);
        printf("%d", small_bars);
      } else if (goal <= (big_bars * 5 + small_bars) &&
                 goal < (big_bars * 5)) {
        small_bars = goal % 5;
        printf("%d", small_bars);
      } else {
        printf("%d", used_small_bars);
      }

    return 0;
}
