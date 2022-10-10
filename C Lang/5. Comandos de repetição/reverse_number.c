#include <stdio.h>
#include <math.h>

void main(void)
{
  int num, qtdNum = 0, reverse = 0, aux;

  printf("Type a number: ");
  scanf("%d", &num);

  aux = num;
  while (num >= 1)
  {
    num /= 10;
    qtdNum++;
  }

  while (aux >= 1)
  {
    reverse += ((aux % 10) * pow(10, --qtdNum));
    aux /= 10;
  }

  printf("Reverse: %d\n", reverse);
}