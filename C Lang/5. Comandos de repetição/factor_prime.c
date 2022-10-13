#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long isprime(long number)
{
  size_t count = 0;
  for (size_t i = 2, j = 1; i <= number || j == 1; i++, j++)
    if (number == 1 || !(number % i))
    {
      count++;
      if (count > 1)
        return 0;
    }
  if (count == 1)
    return count;
  
  return count;
}

int main(void)
{
  int number;
  do
  {
    printf("\n\nType a number: ");
    scanf("%d", &number);
    number = abs(number);

    system("clear");
    printf("Prime factors:\n");
    clock_t being = clock();
    for (size_t i = 1; i <= number; i++)
    {
      if (number % i == 0 && number % 2 && isprime(i))
        printf("%ld", i);
      else if (number % i == 0 && !(number % 2) && isprime(i))
        printf("%ld ", i);
    }
    clock_t end = clock();
    printf("\n\nElapsed: %f seconds\n", (double)(end - being) / CLOCKS_PER_SEC);
  } while (number);
}