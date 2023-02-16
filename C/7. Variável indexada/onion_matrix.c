#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
  uint8_t lines, columns;
  uint8_t i ,j;

  printf("Dimensions: ");
  scanf("%hhu %hhu", &lines, &columns);

  system("clear");
  if (!columns && !lines) {
    printf("Dimensionless matrix!\n");
    return 1;
  }

  uint8_t m[lines][columns];

  if (lines == 1 || columns == 1 && lines != columns) {
    uint8_t times = lines > columns ? lines : columns;

    for ( i = 0; i < times; i++) {
      if (lines == 1)
        m[0][i] = 1;
      else
        m[i][0] = 1;
    }
  } else {
    uint8_t repeat = lines > columns ? lines / 2 : columns / 2;
    uint8_t level = 0;

    while (level < repeat) {
      for (i = level; i < lines - level; i++) 
        for (j = level; j < columns - level; j++) 
          m[i][j] = level + 1;

      level++;
    }
  }

  printf("m[%hhu][%hhu]:\n", lines, columns);
  for (i = 0; i < lines; i++) {
    for (j = 0; j < columns; j++) {
      printf("%hhu ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}

