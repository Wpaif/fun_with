#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, x, sum = 0;
  FILE *f1, *f2;

  f1 = fopen("infile.txt", "w");
  for (int i = 1; i <= 22; i++)
    if (i != 22)
      fprintf(f1, "%d ", 7 * i);
    else
      fprintf(f1, "%d", 7 * i);

  fclose(f1);
  system("bat infile.txt");

  f1 = fopen("infile.txt", "r");
  f2 = fopen("outline.txt", "w");

  do {
    x = fscanf(f1, "%d %d", &a, &b);
    if (x == 2)
      sum += a + b;
    else
      sum += a;
  } while (x == 2);

  fprintf(f2, "Sum %d", sum);
  fclose(f2);
  f2 = fopen("outline.txt", "r");
  fclose(f2);
  system("bat outline.txt");

  return 0;
}
