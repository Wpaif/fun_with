#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number;
  long result;
  char c;

  do {
    printf("Square of a number(Y/N): ");
    scanf("%c", &c);

    if (toupper(c) == 'Y') {
      printf("Type a number: ");
      scanf("%d", &number);
      setbuf(stdin, NULL);
      result = (long)number * number;
      system("clear");
      printf("(%d)² = %ld\n\n", number, result);
    } else
      break;
  } while (toupper(c) == 'Y');
}
