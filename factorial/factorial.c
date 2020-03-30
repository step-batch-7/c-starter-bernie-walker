#include <stdio.h>

unsigned int get_factorial(int);

unsigned int get_factorial(int num)
{
  unsigned int prod = 1;

  for(int mul = 1; mul <= num; mul++)
  {
    prod = prod * mul;
  }

  return prod;
}

int main(void)
{
  int a;
  printf("Enter a number:\n");
  scanf("%d", &a);

  printf("Factorial %d is %u\n", a, get_factorial(a));

  return 0;
}