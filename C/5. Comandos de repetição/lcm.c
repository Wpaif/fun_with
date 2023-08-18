#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int lcm, aux, i, num1, num2;
  printf("Type two numbers:\n");
  scanf("%d %d", &num1, &num2);
  setbuf(stdin, NULL);

  do {
    if (num1 > num2) {
      aux = num1;
      num1 = num2;
      num2 = aux;
    }

    for (i = 2; i <= num2; i++) {
      aux = i * num1;
      if (!(aux % num2)) {
        lcm = aux;
        i = num2 + 1;
      }
    }
    system("clear");

    printf("LMC(%d, %d): %d\n", lcm, num1, num2);

    printf("\nType two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
  } while (num1 && num2);
}