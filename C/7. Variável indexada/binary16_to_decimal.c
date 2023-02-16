#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int16_t bin_to_dec(char *str) {
  int16_t decimal = 0;

  for (uint8_t i = 0; i < 16; i++) {
    decimal <<= 1;
    if (str[i] == '1')
      decimal |= 1;
  }

  if (str[0] == '1')
    decimal -= (1 << 16);

  return decimal;
}

int main() {
  char str[17];
  int16_t decimal;
  char c;

  do {
    system("clear");
    printf("Type a 16-bit two's complement binary: ");
    fgets(str, 18, stdin);
    if (str[16] != '\n')
      setbuf(stdin, NULL);

    if (bin_to_dec(str) >= -32768 && bin_to_dec(str) <= 32767) {
      decimal = bin_to_dec(str);
      printf("\nDecimal: %d\n", decimal);
    } else {
      printf("\nInvalid input.\n");
    }

    printf("\nPress Q to quit or any other key to continue.\n");
    c = getchar();
    setbuf(stdin, NULL);
  } while (c != 'Q' && c != 'q');

  return 0;
}
