#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned long num, aux, digit_accumulated = 0, div = 1;
  int tam;

  printf("Type a number: ");
  scanf("%ld", &num);
  system("clear");

  aux = num;
  for (tam = 1; aux /= 10; tam++)
    ;

  for (size_t i = 0, j = tam - 1; i < tam; i++, j--) {
    long digit = ((num % (div *= 10)) - digit_accumulated) / powl(10, i);

    digit_accumulated += digit;

    aux += digit * powl(10, j);
  }

  printf("%ld\n", aux);

  return 0;
}
