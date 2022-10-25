#include <stdio.h>
#include <stdlib.h>

int *pop(int *arr, size_t length, size_t index) {
  int *arr_final = (int *)(malloc(sizeof(int) * length - 1));
  for (size_t i = 0; i < index; i++)
    arr_final[i] = arr[i];
  for (size_t i = index; i < length - 1; i++)
    arr_final[i] = arr[i + 1];
  return arr_final;
}

int main(void) {
  int arr[] = {1, 2, 1, 3, 1, 4, 1, 5, 1};
  size_t len = sizeof(arr) / sizeof(int);
  int *arr_final = pop(arr, len, 2);

  for (size_t i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");

  len--;

  for (size_t i = 0; i < len; i++)
    printf("%d ", arr_final[i]);
  printf("\n");
}