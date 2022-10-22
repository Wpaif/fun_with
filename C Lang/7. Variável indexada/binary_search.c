#include <stdio.h>

int main(void) {
  long v[] = {15, 4, 7, 5, 6, 3, 2, 11, 21, 14, 0};
  unsigned int length = sizeof(v) / sizeof(long);
  long key, lower_limit = 0, upper_limit = length - 1;

  for (unsigned long i = 0; i < length; i++)
    for (unsigned long j = 0; j < length - 1; j++)
      if (v[i] < v[j]) {
        long aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }

  printf("Binary Search:\n\nFind what number? ");
  scanf("%ld", &key);

  while (lower_limit <= upper_limit) {
    int half = (lower_limit + upper_limit) / 2;

    if (key == v[half]) {
      printf("It has found\n");
      break;
    }

    if (key < v[half])
      upper_limit = --half;
    else
      lower_limit = ++half;
  }
}
