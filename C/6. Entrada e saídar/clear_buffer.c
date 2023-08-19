#include <ctype.h>
#include <stdio.h>

int main(void) {
  int n;
  long result;
  char c;

  do {
    printf("Digite um número: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);

    result = (long)n * n;

    printf("%d² = %ld\n\n", n, result);

    printf("\nContinuar? (S ou N)");
    scanf("%c", &c);
  } while (toupper(c) == 'S');

  return 0;
}
