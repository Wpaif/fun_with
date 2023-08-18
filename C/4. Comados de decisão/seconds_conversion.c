#include <stdio.h>

int main(void) {
  int seg;
  printf("Digite um número de segundos: ");
  scanf("%d", &seg);

  if (seg > 60 * 60 * 24)
    printf("Quantida de segundo superior à contida em 24h!\n");
  else {
    int hh = seg / 3600, ss = seg % 3600 / 60, mm = seg % 3600 % 60;

    int format;
    printf("12 ou 24 horas: ");
    scanf("%d", &format);

    switch (format) {
    case 24:
      printf("\n%02d:%02d:%02d\n", hh, mm, ss);
      break;
    case 12:
      if (hh > 12)
        printf("\n%02d:%02d:%02d pm\n", hh - 12, mm, ss);
      else
        printf("\n%02d:%02d:%02d am\n", hh, mm, ss);
    default:
      break;
    }
  }
}