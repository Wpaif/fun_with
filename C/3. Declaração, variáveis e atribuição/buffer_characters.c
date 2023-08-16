#include <ctype.h>
#include <stdio.h>

int main(void) {
  char phrase;

  printf("Digite uma frase: ");
  scanf("%c", &phrase);

  while (!iscntrl(phrase)) {
    if (isspace(phrase)) {
      scanf("%c", &phrase);
      printf("\n");
    }
    printf("%c", phrase);
    scanf("%c", &phrase);
  }
  printf("\n");
}