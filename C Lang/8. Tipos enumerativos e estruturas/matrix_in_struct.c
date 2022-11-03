#include <stdio.h>

int main() {
  struct matrix {
    int A[5][3];
  } mat1 = {1, 2, 3, 4, 5, 6, 7}, mat2;

  int i, j;

  mat2 = mat1;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++)
      printf("%4d", mat2.A[i][j]);
    printf("\n");
  }
}