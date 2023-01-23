#include <stddef.h>
#include <stdio.h>

size_t arrindex(int arr[], int element);

int main(void) {
  int arr[] = {1, 2, 2, 3, 4, 4, 5, 3, 2, 1};
  size_t length = sizeof(arr) / sizeof(int);

  printf("%zu\n", length);
  for (size_t i = 0; i < length; i++)
    for (size_t j = 0; j < length - 1; j++)
      if (arr[i] == arr[j]) {
        printf("%d ", arr[i]);
      }
}

size_t arrindex(int arr[], int element) {
  int i = 0;
  while (1)
    if (arr[i] == element)
      return i;
    else
      i++;
  return -1;
}