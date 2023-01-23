#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654
int main(void)
{
  int x;
  float ceil, floor, aux;

  printf("Type lower and upper:\n");
  scanf("%f %f", &floor, &ceil);

  if (ceil < floor)
  {
    aux = ceil; 
    ceil = floor;
    floor = aux;
  }

  do
  {
    printf("\n{x ∈ R| %g <= x >= %g} \n", floor, ceil);
    printf("\nx = ");
    scanf("%d", &x);
    system("clear");
    if (x >= floor && x <= ceil)
    {
      aux = x * PI / 180;

      printf("sin(%d*π/180) = %g\n", x, sin(aux*PI/180));
      printf("cos(%d*π/180) = %g\n", x, cos(aux*PI/180));
      printf("tan(%d*π/180) = %g\n", x, tan(aux*PI/180));
      printf("log(%d) = %g\n", x, log10(x));
    }
    else
    {
      printf("Number out of range\n");
    }
  } while (x >= 0);
}