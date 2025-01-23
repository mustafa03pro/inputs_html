#include<stdio.h>
int main()
{
  int x, y, z;
  x = 9 > 8 > 7;
  y = 9 > 8 > 0;
  z = 9 > 8 > 1;
  printf("%d %d %d", x, y, z);
  return 0;
}