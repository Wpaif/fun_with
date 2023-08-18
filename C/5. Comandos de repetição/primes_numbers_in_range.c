#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int upper_limit, lower_limit, aux, count;
  printf("Type the lower limit and the upper limit:\n");
  scanf("%d %d", &lower_limit, &upper_limit);

  if (lower_limit > upper_limit) {
    int aux = lower_limit;
    lower_limit = upper_limit;
    upper_limit = aux;
  }

  system("clear");
  printf("Range: [%d, %d]\n", lower_limit, upper_limit);
  printf("Primes numbers: ");

  while (lower_limit <= upper_limit) {
    aux = lower_limit++;
    count = 0;
    for (size_t i = 1; i <= aux; i++) {
      if (aux == 1) {
        printf("%d ", aux);
        break;
      }

      if (aux % i == 0)
        count++;
    }

    if (count == 2)
      printf("%d ", aux);
  }

  printf("\n");
}