#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BUF_TAM_MAX (32)

int main(void) {
  int ret = 0;
  char buf[BUF_TAM_MAX];
  struct tm tma, tmb;
  time_t diff;

  memset(&tma, 0, sizeof(tma));
  memset(&tmb, 0, sizeof(tmb));

  system("clear");
  printf("Entre com a data inicial (YYYY-MM-DD): ");
  fgets(buf, sizeof(buf), stdin);

  ret = sscanf(buf, "%04d-%02d-%02d", &tma.tm_year, &tma.tm_mon, &tma.tm_mday);

  if (ret != 3) {
    printf("Start date invalid\n");
    return 1;
  }

  tma.tm_mon -= 1;
  tma.tm_year -= 1900;

  printf("Enter with a final date (YYYY-MM-DD): ");
  fgets(buf, sizeof(buf), stdin);

  ret = sscanf(buf, "%04d-%02d-%02d", &tmb.tm_year, &tmb.tm_mon, &tmb.tm_mday);

  if (ret != 3) {
    printf("Final date invalid\n");
    return 1;
  }

  tmb.tm_mon -= 1;
  tmb.tm_year -= 1900;

  diff = difftime(mktime(&tmb), mktime(&tma));

  printf("\nDiference in seconds: %ld\n", diff);
  printf("Diference in minutes: %ld\n", diff / 60);
  printf("Diference in hours:   %ld\n", diff / (60 * 60));
  printf("Diference in days:    %ld\n", diff / (60 * 60 * 24));

  return 0;
}