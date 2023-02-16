#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define B_length 20
#define A_length 5

int main() {
  const int16_t ratio = B_length / A_length;
  uint8_t i, j, x, y;
  int16_t B[B_length][B_length], count = 0;
  float A[A_length][A_length];

  // preenchimento da matrix B
  for (i = 0; i < B_length; i++)
    for (j = 0; j < B_length; j++)
      B[i][j] = ++count;

  for (i = 0; i < B_length; i++) {
    for (j = 0; j < B_length; j++) {
      int8_t z = (j == 0) ? 3 : 4;
      printf("%*d ", z, B[i][j]);
    }
    printf("\n");
  }

  printf("\n\nShyntesis in 5x5 matrix: \n");
  for (i = 0; i < A_length; i++)
    for (j = 0; j < A_length; j++) {
      uint32_t accumulator = 0;

      for (x = ratio * i; x < ratio * i + ratio; x++)
        for (y = ratio * j; y < ratio * j + ratio; y++)
          accumulator += B[x][y];

      A[i][j] = (float)accumulator / pow(ratio, 2);
    }

  for (i = 0; i < A_length; i++) {
    for (j = 0; j < A_length; j++) {
      int8_t z = (j == 0) ? 6 : 8;
      printf("%*.2f", z, A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
