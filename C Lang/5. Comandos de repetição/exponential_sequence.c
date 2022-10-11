#include <stdio.h>
#include <math.h>
void main()
{
  long number;
  double summation = 0.0;

  printf("Type a number: ");
  scanf("%d", &number);

  for (size_t i = 1; i <= number; ++i)
  {
    if (i % 2)
    {
      summation += pow(i / (i + 1.0), pow(i, 2));
    }
    else
    {
      summation -= pow(i / (i + 1.0), pow(i, 2));
    }
  }

  printf("\nSummation: %lf\n", summation);
}