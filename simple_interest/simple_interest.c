#include <stdio.h>

int calculate_simple_interest(int, int, int);

int calculate_simple_interest(int p, int t, int r)
{
  return ((p * t * r) / 100);
}

int main(void)
{
  int p,t,r;

  printf("Enter the Principle amount:\n");
  scanf("%d", &p);
  printf("Enter the interst rate:\n");
  scanf("%d", &t);
  printf("Enter the period:\n");
  scanf("%d", &r);

  printf("Simple interest for the given data is %d\n", calculate_simple_interest(p, t, r));


  return 0;
}