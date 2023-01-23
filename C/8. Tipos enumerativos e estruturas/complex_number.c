#include <stdio.h>
struct complex_number {
  float real, imag;
};
typedef struct complex_number complex;

int main(void) {
  int i, j;
  complex A[3][3] = {{{1.0, -0.1}, {2.0, -0.2}, {3.0, 4.3}},
                      {{4.0, -3.4}, {5.0, 4.1}, {6.0, -2.6}}};
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      printf("%.1f + i(%4.1f)  ", A[i][j].real, A[i][j].imag);

    printf("\n");
  }
}