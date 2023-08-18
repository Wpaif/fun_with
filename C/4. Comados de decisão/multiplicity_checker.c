#include <stdio.h>

int main(void) {
  unsigned long number;
  printf("Type a integer number:\n");
  scanf("%ld", &number);

  printf("\n");
  if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0)
    printf("The number is divisible by three five and seven.\n");
  else {
    if (number % 3 == 0)
      printf("The number is divisivle by three.\n %lu / 3 = %lu\n", number,
             number / 3);
    if (number % 5 == 0)
      printf("The number is divisible by five.\n %lu / 5 = %lu\n", number,
             number / 5);
    if (number % 7 == 0)
      printf("The number is divisible by seven.\n %lu / 7 = %lu\n", number,
             number / 7);
  }
}