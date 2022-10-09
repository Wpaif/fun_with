#include <stdio.h>
#include <math.h>

int main(void)
{
  long count = 0;
  double e;

  while (1)
  {
    count++;
    e = pow((1 + 1.0 / (double)count), count);
    if (count == 1e8)
      break;
  }

  printf("e = %.10lf after %ld loops\n", e, count);
}