#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *mat;
  int *mat_transpose;
  int rows, columns;
  size_t i, j;

  printf("Number of rows and colunms respectively: ");
  scanf("%d %d", &rows, &columns);

  if (rows == columns) {
    mat = (int *)calloc(rows * columns, sizeof(int));
    mat_transpose = (int *)calloc(rows * columns, sizeof(int));

    if (!mat || !mat_transpose)
      exit(1);

    system("clear");
    printf("Type the values:\n");
    for (i = 0; i < rows * columns; i++)
      mat[i] = i + 1;

    printf("Before:\n");
    for (i = 0; i < rows; i++) {
      for (j = 0; j < columns; j++)
        printf("%4d ", mat[i * columns + j]);

      printf("\n");
    }

    for (i = 0; i < rows; i++)
      for (j = 0; j < columns; j++)
        mat_transpose[i * columns + j] = mat[j * rows + i];

    printf("\nAfter:\n");
    for (i = 0; i < rows; i++) {
      for (j = 0; j < columns; j++)
        printf("%4d ", mat_transpose[i * columns + j]);

      printf("\n");
    }

    free(mat);
    free(mat_transpose);
  } else
    printf("Tha matrix is not quadratic");
}