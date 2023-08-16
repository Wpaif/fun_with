#include <math.h>
#include <stdio.h>

#define EULER 2.7182
#define DEG_TO_RAD(deg) ((deg) * M_PI / 180.0)

int main(void) {
  double x, k, u, q, a, b, c, d;
  
  printf("Digite x, k, u e q respectivamente:\n");
  scanf("%lf %lf %lf %lf", &x, &k, &u, &q);

  // Certifique-se de que x esteja dentro do intervalo de -180 a 180 graus
  x = fmod(x, 360.0); // garate x dentro de um círculo completo
  if (x < -180.0) {
    x += 360.0;
  } else if (x > 180.0) {
    x -= 360.0;
  }
  x = DEG_TO_RAD(x);

  // k deve estar entre 0 e 1 para evitar valores complexos em logaritmo
  if (k <= 0 || k >= 1) {
    printf("k deve estar entre 0 e 1.\n");
    return 1;
  }

  // u deve ser positivo para evitar logaritmo negativo
  if (u <= 0) {
    printf("u deve ser um valor positivo.\n");
    return 1;
  }

  // q pode ser qualquer valor real

  a = sin(q * (1 - (x / pow(M_PI, 2))));
  b = sqrt(1 - pow(k, 2) * log(u));
  c = 0.5 * pow(sqrt((M_PI / b * EULER)), (q * q) / (4 * b));
  d = (pow(EULER, -1 * b * sqrt(x))) / (sqrt(x));

  printf("\nx: %.2lf | k: %.2lf | u: %.2lf | q: %.2lf\n\n", x, k, u, q);
  printf("a: %lf\nb: %lf\nc: %lf\nd: %lf\n", a, b, c, d);

  return 0;
}
