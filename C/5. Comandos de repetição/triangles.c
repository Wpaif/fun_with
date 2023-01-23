#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float l1, l2, l3;

  do {
    float T;
    printf("Type l1, l2 and l3: \n");
    scanf("%f %f %f", &l1, &l2, &l3);

    if (fabs(l1 - l2) < l3 && l3 < l1 + l2) {
      printf("\nIt's a triangle:\n");

      if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("  Isoceles\n");
        if (!(l1 != l2 || l1 != l2 || l2 != l3))
          printf("  Equilateral\n");
      } else
        printf("  Scalene\n");

      T = (l1 + l2 + l3) / 2;
      T = sqrt(T*(T-l1)*(T -l2)*(T-l3));

      printf("\n  Area: %fa.u\n", T);

    } else {
      printf("\nIt's not a triange\n");
    }
    printf("\n");
    setbuf(stdin, NULL);
  } while (l1 && l2 && l3);

  return 0;
}
