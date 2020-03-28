#include <stdio.h>

int find_greatest(int, int, int);

int find_greatest(int a, int b, int c)
{
  return a > b ? a : b > c ? b : c;
}

int main(void)
{
  int a,b,c;
  printf("Enter the three Numbers:\n");
  scanf("%d\n%d\n%d", &a, &b, &c);

  printf("The greatest amongst the three number is %d\n", find_greatest(a, b, c));

  return 0;
}