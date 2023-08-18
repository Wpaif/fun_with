#include <math.h>
#include <stdio.h>
#include <time.h>

int main(void) {

  int sign = -1, pwr = 3;
  double previous, current, rad, sum, degr;
  printf("Give degrees: ");
  scanf("%lf", &degr);

  rad = degr * (M_PI / 180);
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

  printf("The elapsed time is %f seconds",
         (double)(end - begin) / CLOCKS_PER_SEC);
}