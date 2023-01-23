#include <stdio.h>

int main(void) {
  int mat[3][3] = {{4, 12, 33}, {22, 54, 23}, {19, 7, 11}};
  size_t i, j, k;
  float row_med, column_med, main_diagonal_med;

  for (i = 0; i < 3; i++) {
    row_med = 0;
    for (j = 0; j < 3; j++) {
      row_med += mat[i][j];
    }
    row_med /= 3;
    printf("Row average(%lu): %.1f\n", i + 1, row_med);
  }

  printf("\n");
  for (k = 0; k < 3; k++) {
    column_med = 0;
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
        if (j == k) {
          column_med += mat[i][j];
        }
    printf("Culunm average(%zu): %.1f\n", k + 1, column_med / 3);
  }

  printf("\n");
  for (i = 0, main_diagonal_med = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      if (i == j)
        main_diagonal_med += mat[i][j];
  printf("Main diagonal average: %.1f\n", main_diagonal_med / 3);
}
