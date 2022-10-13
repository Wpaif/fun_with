#include <math.h>
#include <stdio.h>

unsigned long factorial(int n) {
  if (n == 1 || n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(void) {
  double sen = 0, cos = 0, angle;
  const double PI = 3.14159265;

  printf("Type a angle (Degrees): ");
  scanf("%lf", &angle);

  angle = (PI * angle) / 180;

  for (size_t i = 0; i < 50; i++) {
    sen += pow(angle, i + 1) / factorial(i + 1);
  }

  printf("Sin = %.15lf\n", sen);
}