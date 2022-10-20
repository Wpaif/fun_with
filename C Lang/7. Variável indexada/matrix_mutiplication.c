#include <stdio.h>
typedef int vetor[10];
typedef vetor matriz[10];
int main(void) {
  matriz A, B, C;
  int m, n, p, i, j, k, aux;

  printf("Matrix A: \n\n");
  printf("Number of rows and colunms:");
  scanf("%d %d", &m, &n);
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\nMatrix B:\n\n");
  printf("Númber of columns:");
  scanf("%d", &p);
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      printf("B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  /* A . B */
  for (i = 0; i < m; i++)
    for (j = 0; j < p; j++) {
      aux = 0;
      for (k = 0; k < n; k++)
        aux += A[i][k] * B[k][j];
      C[i][j] = aux;
    }

  printf("\nMatrix C: \n\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++)
      printf("%4d", C[i][j]);
    printf("\n");
  }
}