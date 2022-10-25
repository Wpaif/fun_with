#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float A[5][5];
  int B[20][20], i, j, k, x, y, aux;
  char condition;

  for (i = k = 0; i < 20; i++)
    for (j = 0; j < 20; j++)
      B[i][j] = ++k * rand() % 40 + 40;

  system("clear");
  printf("Display main matrix?[Y/N] ");
  scanf("%c", &condition);

  if (toupper(condition) == 'Y') {
    printf("\nMain Matrix:\n\n");
    for (i = k = 0; i < 20; i++) {
      for (j = 0; j < 20; j++) {
        printf("%2d ", B[i][j]);
      }
      printf("\n");
    }
  }

  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++) {
      aux = 0;
      for (x = 4 * i; x <= 4 * i + 3; x++)
        for (y = 4 * j; y <= 4 * j + 3; y++)
          aux += B[x][y];
      A[i][j] = (float)aux / 16;
    }

  printf("\nReduced Matrix:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%8.2f ", A[i][j]);
    }
    printf("\n");
  }
}
