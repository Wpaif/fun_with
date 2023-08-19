#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double A, B, C;
  double disc;
  char c;

  do {
    FILE *output = fopen("equations.txt", "a");

    if (output == NULL) {
      printf("Não foi possível abrir o arquivo\n");
      return 1;
    }

    printf("Digite os coeficiente A, B e C:\n");
    scanf("%lf %lf %lf", &A, &B, &C);
    setbuf(stdin, NULL);

    disc = pow(B, 2) - 4 * A * C;

    fprintf(output, "------------------------------------------\n");
    fprintf(output, "%gx² %c %gx %c %g = 0\n", A, (B >= 0) ? '+' : '-', fabs(B),
            (C >= 0) ? '+' : '-', fabs(C));

    fprintf(output, "Δ = %.2lf\n\n", disc);
    if (disc > 0) {
      fprintf(output, "x' = %g\n", (-1 * B + sqrt(disc)) / (2 * A));
      fprintf(output, "x'' = %g\n\n", (-1 * B - sqrt(disc)) / (2 * A));
    } else if (disc < 0) {
      fprintf(output, "x'' = %g + (%.2lf)i\n", -1 * B, sqrt(fabs(disc)));
      fprintf(output, "x'  = %g - (%.2lf)i\n", -1 * B, sqrt(fabs(disc)));
    } else {
      fprintf(output, "x = %g\n", ((-1 * B) + sqrt(fabs(disc)) / (2 * A)));
    }

    fclose(output);

    printf("Deseja calcualar as raizes de outra equação? (S ou N): ");
    scanf("%c", &c);
    setbuf(stdin, NULL);

    if(toupper(c) == 'N'){
      break;
    }

  } while (1);

  return 0;
}