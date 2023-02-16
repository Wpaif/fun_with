#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t gcd(int32_t a, int32_t b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int32_t mmc(int32_t a, int32_t b) { return (a * b) / gcd(a, b); }

int main() {
  uint32_t num_count, i, j, result = 1;
  int32_t *numbers;

  printf("KMC of how many nubers: ");
  scanf("%u", &num_count);

  numbers = (int32_t *)malloc(num_count * 4);
  if (!numbers) {
    printf("Could not allocate memory!\n");
    return 1;
  }

  printf("Type the numbers: ");
  for (i = 0; i < num_count; i++) {
    scanf("%d", &numbers[i]);
  }

  result = numbers[0];
  for (i = 1; i < num_count; i++) {
    result = mmc(result, numbers[i]);
  }

  printf("LMC: %d\n", result);

  free(numbers);

  return 0;
}
