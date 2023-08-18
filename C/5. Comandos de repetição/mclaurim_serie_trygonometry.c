#include <math.h>
#include <stdio.h>

#define loops 10 

long int factorial(short int n);

int main() {
  int angle;
  long double sen = 0.0, cos = 0.0, aux;
  do {
    printf("Type an angle: ");
    scanf("%d", &angle);

    aux = M_PI * angle / 180;

    for (size_t i = 0; i <= loops; i++) {
      sen += pow(-1, i) * (pow(aux, 2 * i + 1) / factorial(2 * i + 1));
      cos += pow(-1, i) * (pow(aux, 2 * i) / factorial(2 * i));
    }

    // Disregards the study of the signal by the Cartesian plane
    printf("sin(%d): %.16Lf\n", angle, sen);
    printf("cos(%d): %.16Lf\n\n", angle, cos);

  } while (angle > 0);

  return 0;
}

long int factorial(short n) {
  if (n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}
