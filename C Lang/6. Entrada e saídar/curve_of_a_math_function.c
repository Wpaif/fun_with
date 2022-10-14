#include <stdio.h>

int main(void) {
  printf("f(x) = 2x² + 5x + 1\n\n");

  for (int x = -4; x <= 4; x++) {
    printf("%*c\n", 10 + 2 * x * x + 5 * x + 1, '#');
  }
}
