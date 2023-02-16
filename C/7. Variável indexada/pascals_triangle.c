#include <stdint.h>
#include <stdio.h>

int main() {
  uint8_t i, j, n;
  uint8_t arr[100][100];

  printf("Size of pascal's triangle: ");
  scanf("%hhu", &n);

  arr[0][0] = 1;

  for (i = 1; i < n; i++) {
    arr[i][0] = 1;
    for (j = 1; j <= i; j++)
      arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%hhu ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
