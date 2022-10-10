#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main(void){
  float radius;

  printf("Type a radius: ");
  scanf("%f", &radius);

  printf("%f\n", radius);
  if(radius >= 0.1 && radius <= 100){
    printf("Area: %.2f u.a\n", PI*pow(radius,2));
    printf("Circumference: %.2f u.c\n", 2*PI*radius);
  }
}