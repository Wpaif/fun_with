#include <stdint.h>
#include <stdio.h>

union value {
  int valInt;
  float valFloat;
  char valChar;
};
typedef union value value;

int main() {
  value v;
  v.valInt = 4455;
  printf("v = 4455\nValue integer: %d\nValor real: %f\nValor char: %c\n\n", v.valInt,
         v.valFloat, v.valChar);
  v.valFloat = 4455.68;
  printf("v = 4455.68\nValue integer: %d\nValor real: %f\nValor char: %c\n\n", v.valInt,
         v.valFloat, v.valChar);
  v.valChar = '*';
  printf("v = '*'\nValue integer: %d\nValor real: %f\nValor char: %c\n\n", v.valInt,
         v.valFloat, v.valChar);

  return 0;
}
