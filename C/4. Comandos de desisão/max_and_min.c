#include <stdio.h>

int main(void)
{
  int x, y, z, w, max, min;
  printf("Type four numbers:\n");
  scanf("%d %d %d %d", &x, &y, &z, &w);

  min = x<y?x<z?x:z:y<z?y:z;
  max = x>y?x>z?x>w?x:w:z>w?z:w:y>z?y>w?y:w:z>w?z:w;

  printf("MIN(%d,%d, %d): %d\n", x, y, z, min);
  printf("MAX(%d, %d, %d, %d): %d\n", x, y, z, w, max);
}