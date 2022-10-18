#include <stdio.h>
int main() {
  int a, b, x;
  FILE *f1;
  f1 = fopen("infile.txt", "r");
  x = fscanf(f1, "%d %d", &a, &b);
  printf("a: %2d\nb: %2d\n\n", a, b);

  while (x > 0) {
    x = fscanf(f1, "%d %d", &a, &b);
    printf("Readers: %d\n", x);
    printf("a: %2d\nb: %2d\n\n", a, b);
  }
}