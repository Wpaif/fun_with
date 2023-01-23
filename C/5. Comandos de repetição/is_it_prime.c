#include <stdio.h>
#include <stdlib.h>

int main(void){
  int number;
  do{
    size_t count = 0;
    printf("Type a number: ");
    scanf("%d", &number);
    number = abs(number);

    for (size_t i = 2, j = 1; i <= number || j == 1; i++, j++)
      if (number == 1 || !(number % i))
        count++;

    system("clear");
    if (count == 1)
      printf("|%d| is a prime number\n\n", number);

  } while (number);
}