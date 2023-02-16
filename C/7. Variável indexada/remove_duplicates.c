#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int32_t arr[] = {1, 2, 2, 3, 4, 4, 5, 3, 2, 1};
  uint8_t length = sizeof(arr) / sizeof(int32_t);
  uint8_t k = 0;

  for (uint8_t i = 0; i < length; i++) {
    bool duplicate = false;
    for (uint8_t j = 0; j < k; j++)
      if (arr[i] == arr[j]) {
        duplicate = true;
        break;
      }

    if (!duplicate)
      arr[k++] = arr[i];
  }

  // the best implementation would be the one that reallocates arr's memory
  // considering that without duplicates it is smaller
  for (int i = 0; i < k; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
