#include <stdio.h>

int main(void) {
  int v[] = {5, 4, 22, 6, 12, 7, 4, 8, 1, -1, -5, 0, 11};
  char length = sizeof(v) / sizeof(v[0]);

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (v[i] <= v[j]) {
        int aux = v[j];
        v[j] = v[i];
        v[i] = aux;
      }
    }
  }

  for (int i = 0; i < length; i++) {
    if (i == 0)
      printf("\n[%d", v[i]);
    else if (i == length - 1)
      printf(", %d]\n", v[i]);
    else
      printf(", %d", v[i]);
  }
}