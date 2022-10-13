#include <math.h>
#include <stdio.h>
#include <time.h>

#define pi 3.14159265358979323846

int main(void) {

  int sign = -1, pwr = 3;
  double previous, current, rad, sum, degr;
  printf("Give degrees: ");
  scanf("%lf", &degr);

  rad = degr * (pi / 180);
  sum = rad;

  previous = rad;

  clock_t begin = clock();
  do {
    current = (previous * pow(rad, 2)) / (pwr * pwr - 1);

    sum += sign * current;
    pwr += 2;
    sign *= -1;
  } while (fabs(current - previous) > pow(10, -6));
  clock_t end = clock();

  printf("sin(%lf°) = %.6f\n", degr, sum);
  // printf("%.6f\n", sin(rad));

  printf("The elapsed time is %f seconds",
         (double)(end - begin) / CLOCKS_PER_SEC);
}