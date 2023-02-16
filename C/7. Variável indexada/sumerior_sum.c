#include <openssl/rand.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MIN 0
#define ROWS 7
#define COLS 5

int main() {
  system("clear");
  unsigned char matrix[ROWS][COLS];
  uint8_t i, j;
  uint32_t sup_sum = 0;

  for (i = 0; i < ROWS; i++)
    RAND_bytes(matrix[i], COLS);

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      matrix[i][j] = (double)matrix[i][j] / 256 * (MAX - MIN) + MIN;
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      if (i < j) {
        printf("%d ", matrix[i][j]);
        sup_sum += matrix[i][j];
      } else
        printf("* ");
    }
    printf("\n");
  }

  printf("Sum of the numbers above main diagonal: %u\n", sup_sum);
  return 0;
}
