#include <ctype.h>
#include <stdio.h>

int main() {
  char c;
  printf("Digite uma frase encerrada por enter:\n");
  c = getchar();

  printf("\n\nLetras maiusculas da frase:\n");

  while (!iscntrl(c)) {
    if (isupper(c)) {
      printf("%c", c);
    }

    c = getchar();
  }

  return 0;
}