#include <stdio.h>

int gcd(int,int);

int gcd(int num1, int num2)
{
  for (int divisor = num2; divisor >= 1; divisor--)
  {
    if(num1 % divisor == 0 && num2 % divisor == 0)
    {
      return divisor;
    }
  }
}

int main(void)
{
  int a,b;
  printf("Enter two number:\n");
  scanf("%d\n%d", &a, &b);

  printf("greatest common divisor of %d and %d is %d\n", a,b,gcd(a,b));
}