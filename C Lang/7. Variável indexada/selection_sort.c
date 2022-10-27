#include <stdio.h>

int main(void) {
  int i, j, min, aux;
  int arr[] = {4, 3, 6, 2, 7, 1, 8, 10, 9, 6};
  size_t length = sizeof(arr) / sizeof(arr[0]);

  for (i = 0; i < length - 1; i++) {
    min = i;
    for (j = i + 1; j < length; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    if (i != min) {
      aux = arr[i];
      arr[i] = arr[min];
      arr[min] = aux;
    }
  }

  for (i = 0; i < length; i++)
    printf("%d ", arr[i]);
  printf("\n");
}